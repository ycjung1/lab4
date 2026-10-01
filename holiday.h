#pragma once 
#include "dayOfYear.h"

// 1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
namespace JungYunchae2649114
{
    class holiday
    {
        // private 멤버변수 선언: 클래스1형 객체, 그 외 멤버변수 1개 이상
        dayOfYear date;
        bool parkingEnforcement;

        // public 멤버함수 인라인으로 정의
        public:
        // -생성자: 모든 멤버변수 초기화, 기본값 설정
        holiday(dayOfYear d =dayOfYear{10, 1}, bool p = false)
            : date{d}, parkingEnforcement{p} {}
        
            // -print: 표준스트림출력으로 멤버변수들 출력
        void print() const  //holiday::print()
        {
            date.print(); //dayOfYear::print()
            if (parkingEnforcement)
                std::cout << "Parking laws will be enforced.\n";
            else std::cout << "Parking laws will NOT de enforced.\n";
        }

        const dayOfYear& getDate() const {return date;}
        void setDate(const dayOfYear& d) {date = d;}
        // -클래스1형 객체의 접근함수를 참조형식으로 구현
    };
}


