#include "holiday.h"

// 1의 본인이름학번의 네임스페이스 안에 비멤버함수 compare클래스1 정의: 매개변수는 const 클래스1 참조형 2개, 매개변수 멤버들이 모두 같은지를 비교
namespace JungYunchae2649114
{
    bool compareDayOfYear(const dayOfYear& d1, const dayOfYear& d2)
    {
        return d1.getmonth() == d2.getmonth() || d1.getday() == d2.getday();
    }
}


int main()
{
    using namespace JungYunchae2649114;
    holiday h1{};
    h1.print();
    
    holiday h2{dayOfYear{12,25}. true};
    h2.print();

    if (compareDayOfYear(h1.getDate(), h2.getDate())) 
        std::cout << "same\n";
    else std::cout << "not same\n";

    return 0;
}


// 클래스2 객체1 선언, print함수 호출

// 클래스2 객체2 초기값을 넣어서 선언, print함수 호출

// 비멤버함수 compare클래스1을 호출하여 그 리턴값이 true면 same, false면 not same을 표준스트림으로 출력