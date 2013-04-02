#include <iostream>
#include <windows.h>


// a simple timer class
struct Timer
{
    Timer() 
    {
        Reset();
    }

    double GetElapsedTimeSecs()
    {
        LARGE_INTEGER now;
        QueryPerformanceCounter( &now );

        LARGE_INTEGER span;
        span.QuadPart = now.QuadPart - m_startTime.QuadPart;
        
        LARGE_INTEGER freq;
        QueryPerformanceFrequency( &freq ) ;
        return (double)span.QuadPart /(double)freq.QuadPart;
    }

    void Reset()
    {
        QueryPerformanceCounter(&m_startTime);
    }
    
private:

    LARGE_INTEGER m_startTime;
};


// Interface for all tasks to implement
class IDishwasher
{
public:
    virtual ~IDishwasher() {};
    virtual std::string GetName() = 0;
    virtual void Wash() = 0;
};



template< class T >
class HumanInteractionSimulator : public T
{
public:
    void Wash()
    {
        std::cout << "Filling dishwasher - " << GetName().c_str() << " with dirty stuff " << std::endl;
        T::Wash();
        std::cout << "emptying dishwasher - " << GetName().c_str() << ", it is now empty" << std::endl;
    }
};

template< class T >
class MachineTimer : public T
{
    Timer _timer;
public:
    void Wash()
    {
        _timer.Reset();
        T::Wash();
        double t = _timer.GetElapsedTimeSecs();
        std::cout << "Wash Duration: " << t << " seconds" << std::endl;
    }
};

class Jenn_Air_Dishwasher
{
public:
    void Wash()
    {
        std::cout << "Dishwasher is washing" << std::endl;
    }

    std::string GetName()
    {
        return "Jenn-Air JDB3200AW[W]";
    }
};

template< class T >
class WashingMachineAdapter : public IDishwasher, public T
{
public:
    virtual void Wash()
    {
        T::Wash();
    }

    virtual std::string GetName()
    {
        return T::GetName();
    }
};



int main()
{
  


    // Note: no heap allocations, pointer, runtime checks, virtual functions and the optimizing compiler goes nuts
    typedef public WashingMachineAdapter< HumanInteractionSimulator< MachineTimer< Jenn_Air_Dishwasher > > > washingMachine;

    washingMachine wm;
    IDishwasher* iwm = &wm;
    iwm->Wash();
    
    

    std::cout << "Press enter to exit...";
    std::cin.get();
	return 0;
}