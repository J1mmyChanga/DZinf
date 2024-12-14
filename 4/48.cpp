#include <iostream>
using namespace std;

int main() {
    int seller_max_sum_of_prod = 0, seller_min_sum_of_prod = 0, seller_max_sum_of_comm = 0, seller_min_sum_of_comm = 0;
    float a[3][4] =
    {
        {5, 2, 0, 10},
        {3, 5, 2, 5},
        {20, 0, 0, 0},
    };
    float b[4][2] =
    {
        {1.20, 0.50},
        {2.80, 0.40},
        {5.00, 1.00},
        {2.00, 1.50},
    };
    float c[3][2] =
    {
        {a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0] + a[0][3] * b[3][0], a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1] + a[0][3] * b[3][1]},
        {a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2] * b[2][0] + a[1][3] * b[3][0], a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2] * b[2][1] + a[1][3] * b[3][1]},
        {a[2][0] * b[0][0] + a[2][1] * b[1][0] + a[2][2] * b[2][0] + a[2][3] * b[3][0], a[2][0] * b[0][1] + a[2][1] * b[1][1] + a[2][2] * b[2][1] + a[2][3] * b[3][1]},
    };

    float sum_prod = c[0][0] + c[1][0] + c[2][0]; //сумма цен на товары
    float sum_comm = c[0][1] + c[1][1] + c[2][1]; //сумма коммисионных на товары

    float sums_of_prod[3] = {c[0][0],  c[1][0], c[2][0]}; // массив с суммами цен на товары для каждого продавца

    float max_sum_of_prod = sums_of_prod[0];
    for (int i = 1; i < 3; i++) {  // продавец с самой большой суммой товара
        if (sums_of_prod[i] > max_sum_of_prod)
        {
            max_sum_of_prod = sums_of_prod[i];
            seller_max_sum_of_prod=i+1;
        }
        if (seller_max_sum_of_prod==0) {seller_max_sum_of_prod=1;}
    }

    float min_sum_of_prod = sums_of_prod[0];
    for (int i = 1; i < 3; i++) { // продавец с наименьшей суммой товара
        if (sums_of_prod[i] < min_sum_of_prod){
            min_sum_of_prod = sums_of_prod[i];
            seller_min_sum_of_prod=i+1;
        }
        if (seller_min_sum_of_prod==0) {seller_min_sum_of_prod=1;}
    }

    float sums_of_comm[3] = {c[0][1],  c[1][1], c[2][1]};
    float max_sum_of_com = sums_of_comm[0];
    for (int i = 1; i < 3; i++) { // продавец с наибольшей суммой коммисионных
        if (sums_of_comm[i] > max_sum_of_com) {
            max_sum_of_com = sums_of_comm[i];
            seller_max_sum_of_comm = i+1;
        }
        if (seller_max_sum_of_comm == 0) {seller_max_sum_of_comm = 1;}
    }

    float min_sum_of_com = sums_of_comm[0];
    for (int i = 1; i < 3; i++) { // продавец с наименьшей суммой коммисионных
        if (sums_of_comm[i] < min_sum_of_com) {
            min_sum_of_com = sums_of_comm[i];
            seller_min_sum_of_comm = i+1;
        }
        if (seller_min_sum_of_comm==0) {seller_min_sum_of_comm=1;}
    }

    cout <<"Наибольшая выручка: Продавец " << seller_max_sum_of_prod << "\nНаименьшая выручка: Продавец " << seller_min_sum_of_prod << endl;
    cout <<"Наибольшие комиссионные: Продавец " << seller_max_sum_of_comm << "\nНаименьшая комиссионные: Продавец " << seller_min_sum_of_comm << endl;
    cout <<"Общая сумма вырученных денег: " << sum_prod <<endl;
    cout <<"Общая сумма комиссионных денег: "<< sum_comm <<endl;
    cout <<"Общая сумма прошедших денег: "<< sum_prod + sum_comm <<endl;
    cout <<"\n" <<endl;
}