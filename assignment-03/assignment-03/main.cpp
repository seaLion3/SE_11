#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

#include "my.h"

#define MAX_STRING 32

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask(ifstream* in_fp);
// void program_exit();

using namespace std;

string line;
ifstream inputFile("input.txt");
// ofstream outputFile("output.txt");

int main() {
    ifstream in_fp;
    in_fp.open(INPUT_FILE_NAME);
    doTask(&in_fp);

    return 0;

}

void exitProgram() {
    ofstream output("output.txt", ios::app);
    output << "6.1. 종료" << endl;
}


void doTask(ifstream* in_fp) {

    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (is_program_exit == 0) {

        *in_fp >> menu_level_1 >> menu_level_2;

        switch (menu_level_1) {

        case 1:
            switch (menu_level_2) {
            // 1.1 화원가입
            case 1:
                new SignUpControl(in_fp);
                break;

            case 2:
                new ResignControl();
                break;
            }
            break;

        case 2:

            switch (menu_level_2) {

            // 2.1 로그인
            case 1:
                new LogInControl(in_fp);
                break;
            // 2.2 로그아웃
            case 2:
                new LogOutControl();
                break;
            }
            break;

        case 3:

            switch (menu_level_2) {
                
            // 3.1 판매 의류 등록
            case 1:
                new EnrollProductControl(in_fp);
                break;

             // 3.2 등록 상품 조회
            case 2:
                new CheckSellingProductControl();
                break;

            // 3.3 판매 완료 상품 조회
            case 3:
                new SoldOutProductControl();
                break;
            }
            break;

        case 4:
            switch (menu_level_2) {
            
            // 4.1 상품 정보 검색
            case 1:
                new SearchProductControl(in_fp);
                break;

            // 4.2 상품 구매
            case 2:
                new PurchaseProductControl();
                break;

            // 4.3 상품 구매 내역 조회
            case 3:
                new PurchaseHistoryControl();
                break;

            // 4.4 상품 구매후기 작성
            case 4:
                new ProductReviewControl(in_fp);
                break;
            }
            break;

        case 5:
            switch (menu_level_2) {
            // 5.1 판매 상품 통계
            case 1:
                new SoldProductControl();
                break;
            }
            break;


        case 6:
            switch (menu_level_2) {

            // 종료
            case 1:
                exitProgram();
                is_program_exit = 1;
                break;
            }
            break;
        }
    }
}


