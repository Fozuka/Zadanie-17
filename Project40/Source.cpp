#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int choice;
    cout << "������������ ������� ����� 17\n";
    cout << "�������� ����� ������� 1-5:";
    cin >> choice;
    switch (choice) {
    case 1:
    {
        int K, L;
        long summa = 0;
        const int N = 100;
        int Array[100];
        for (int i = 0; i < N; i++) {
            Array[i] = rand() % 100;
        }
        cout << "������� 2 ����� �� 1 �� 100:";
        cin >> K >> L;
        for (int i = K; i <= L; i++) {
            summa = summa + Array[i];
        }
        cout << "����� �������� ������� ����� ����� �������: " << summa;
        break;
    }
    case 2:
    {
        const int D = 10;
            int progressia=0;
        bool flag;
      
        int Array[D];
        for (int j = 0; j < D; j++) {
            cout << "������� �������� �������� ������� ����� " << j + 1 << ": ";
            cin >> Array[j];
        }
        progressia = Array[2] - Array[1];
        int j = 1;
        while ((Array[j] - Array[j - 1] == progressia) && (j < D)) {
            j++;
            flag = true;
        }
        if (flag == true) {
            cout << "�������� ����������: " << progressia;
        }
        else {
            cout << '0';
        }
        break;
    }
    case 3:
    {
        const int A = 10;
            int min = 100000000;
        int Array[A];
        for (int h = 0; h < A; h++) {
            cout << "������� �������� �������� ������� ����� " << h + 1 << ": ";
            cin >> Array[h];
        }
        for (int h = 0; h < A; h++) {
            if (((h + 1) % 2) == 0)
                if (Array[h] < min)
                    min = Array[h];
        }
        cout << "����������� ������ ������� �������: " << min;
        break;
    }
    case 4:
    {
        const int A = 10;
            int max = 0;
        int Array[A];
        for (int h = 0; h < A; h++) {
            cout << "������� �������� �������� ������� ����� " << h + 1 << ": ";
            cin >> Array[h];
        }
        for (int h = (A - 1); h > 0; h--) {
            if ((Array[h] > Array[h - 1]) && (Array[h] > Array[h + 1]))
                max = h;
            if (max > 0) {
                cout << "����� ���������� ���������� ���������: " << max;
                break;
            }
        }
        if (max == 0)
            cout << "���������� ��������� ���";
        break; }
    case 5:
    {
        const int A = 10, max = 0;
        int Array[A];
        for (int h = 0; h < A; h++) {
            cout << "������� �������� �������� ������� ����� " << h + 1 << ": ";
            cin >> Array[h];
        }
        for (int i = 0; i < A; i++) {
            for (int j = i + 1; j < A; j++) {
                if (Array[i] == Array[j])
                    cout << "������ ��������� ������� � ����������� ����������: " << i + 1 << " " << j + 1<<endl;
            }
        }
        break;
    }
    default:
        cout << "�������� ����";
        break;
    }

    return 0;
}
