#pragma once 
#include "hotalGuest.h"

// 1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
namespace JungYunchae2649114
{
    class breakfast
    {
        // private 멤버변수 선언: 클래스1형 객체, 그 외 멤버변수 1개 이상
        hotelGuest guest;
        bool breakfastE;

        // public 멤버함수 인라인으로 정의
        public:
        // -생성자: 모든 멤버변수 초기화, 기본값 설정
        breakfast(hotalGuest g = hotalGuest{101, 1}, bool b = false)
            : guest{g}, breakfastE{b} {}
        
            // -print: 표준스트림출력으로 멤버변수들 출력
        void print() const  //breakfast::print()
        {
            breakfast.print(); //hotelGuest::print()
            if (breakfastE)
                std::cout << "eat\n";
            else std::cout << "no breakfast\n";
        }

        const hotalGuest& getRoomNumber() const {return guest;}
        void setRoomNumber(const hotalGuest& g) {guest = g;}
        // -클래스1형 객체의 접근함수를 참조형식으로 구현
    }
}


