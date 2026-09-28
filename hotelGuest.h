#pragma once //한번만 include하게끔 만드는 헤더가드

#include <iostream>

// 1. 본인이름학번의 네임스페이스
// -본인이름학번 네임스페이스 예: 이름이 김프로이고 학번이 1234567일 경우 KimPro1234567
// using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.
// -using 지시자 예: { using namespace std; cout << "Enter your id: "; }
// -네임스페이스 지정자 예: std::cout << "Enter your id: ";

// 2. 클래스명.h: 클래스정의
// 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언 (2개 이상)
// private 멤버함수 정의
// -test멤버변수1: 멤버변수1 범위가 아니면 프로그램 종료
// -test멤버변수2: 멤버변수2 범위가 아니면 프로그램 종료
// public 멤버함수 정의
// -input: 표준스트림입력으로 멤버변수들 입력, test함수들 호출
// -set 접근함수들: 멤버변수 값 설정 및 test함수 호출
// -print: 표준스트림출력으로 멤버변수들 출력
// -get 접근함수들: 멤버변수 값 리턴

namespace JungYunchae2649114{
class hotelGuest {
    int roomNumber{};
    int stayNights{};
    void testRoomNumber(){
        if (roomNumber <101 ||roomNumber > 999 || roomNumber % 100 == 0) {
            std::cout << "Invalid value.\n";
            std::exit(1);
        }
    }
    void testStayNights(){
        if (stayNights < 1) {
            std::cout << "Invalid value.\n";
            std::exit(1);
        }
    }

    public:
    //생성자: 모든 멤버변수 초기화, 기본값 설정, test함수들 호출
    hotelGuest(int RN = 101, int SN = 1)//기본값 설정
    : roomNumber{RN}, stayNights{SN}
    {
        testRoomNumber();
        testStayNights();
    }


    void input(){
        std::cout << "Enter room number: ";
        std::cin >> roomNumber;
        std::cout << "Enter num of nights: ";
        std::cin >> stayNights;
        testRoomNumber();
        testStayNights();
    }
    void setRoomNumber(int newRoomNumber){
        roomNumber = newRoomNumber;
        testRoomNumber();
    }
    void setStayNights(int newStayNights){
        stayNights = newStayNights;
        testStayNights();
    }
    void print() const {
        switch(roomNumber/100){
            case 1: std::cout << "floor 1, "; break;
            case 2: std::cout << "floor 2, "; break;
            case 3: std::cout << "floor 3, "; break;
            case 4: std::cout << "floor 4, "; break;
            case 5: std::cout << "floor 5, "; break;
            case 6: std::cout << "floor 6, "; break;
            case 7: std::cout << "floor 7, "; break;
            case 8: std::cout << "floor 8, "; break;
            case 9: std::cout << "floor 9, "; break;
        }
        std::cout << "room number: " << roomNumber % 100 << std::endl;
        std::cout << "num of nights: " << stayNights << std::endl;
    }
    int getRoomNumber() const {return roomNumber;} //함수 안에서 멤버변수 변경X
    int getStayNights() const {return stayNights;}
};

}

// 3. main.cpp: 테스트
// 객체1 선언, input 멤버함수 호출, print 멤버함수 호출
// 객체2 선언, set 함수들 호출, print 멤버함수 호출
// 객체1과 객체2가 같은지 비교 (모든 멤버변수 비교, get 함수들 이용)
