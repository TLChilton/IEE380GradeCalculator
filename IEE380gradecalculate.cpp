#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    double E1, E2, F, H, P, Q, AVG_1, AVG_2;
    int cont = 1;

    do
    {
        cout << "\n\033[0;93mEnter a -1 for one of the following prompts for a minimum grade analysis \n";
        cout << "\033[0mEnter your exam 1 score: \033[0;95m";
        cin >> E1;
        E1 = E1;
        cout << "\033[0mEnter your exam 2 score: \033[0;95m";
        cin >> E2;
        E2 = E2;
        cout << "\033[0mEnter your final score: \033[0;95m";
        cin >> F;
        F = F;
        cout << "\033[0mEnter your homework average score: \033[0;95m";
        cin >> H;
        cout << "\033[0mEnter your project score: \033[0;95m";
        cin >> P;
        cout << "\033[0mEnter your quiz score (out of 10): \033[0;95m";
        cin >> Q;

        Q = Q * 10;

        if (E1 < 0)
        {
            cout << "\n\033[0;93mAverage 2 Analysis \n\033[0m";
            AVG_2 = 70;
            AVG_2 = (AVG_2 - (0.24*E2 + 0.1*H + 0.09*Q + 0.07*P + 0.26*F))/0.24;
            cout << "To get a C you need to get a \033[0;92m" << AVG_2 << "\033[0m on exam 1 \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_2 = 80;
            AVG_2 = (AVG_2 - (0.24*E2 + 0.1*H + 0.09*Q + 0.07*P + 0.26*F))/0.24;
            cout << "To get a B you need to get a \033[0;92m" << AVG_2 << "\033[0m on exam 1 \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_2 = 90;
            AVG_2 = (AVG_2 - (0.24*E2 + 0.1*H + 0.09*Q + 0.07*P + 0.26*F))/0.24;
            cout << "To get an A you need to get a \033[0;92m" << AVG_2 << "\033[0m on exam 1 \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";
        }
        else if (E2 < 0)
        {
            cout << "\n\033[0;93mAverage 2 Analysis \n\033[0m";
            AVG_2 = 70;
            AVG_2 = (AVG_2 - (0.24*E2 + 0.1*H + 0.09*Q + 0.07*P + 0.26*F))/0.24;
            cout << "To get a C you need to get a \033[0;92m" << AVG_2 << "\033[0m on exam 2 \n";
            if (AVG_2 > 112)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_2 = 80;  
            AVG_2 = (AVG_2 - (0.24*E2 + 0.1*H + 0.09*Q + 0.07*P + 0.26*F))/0.24;
            cout << "To get a B you need to get a \033[0;92m" << AVG_2 << "\033[0m on exam 2 \n";
            if (AVG_2 > 112)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_2 = 90;
            AVG_2 = (AVG_2 - (0.24*E2 + 0.1*H + 0.09*Q + 0.07*P + 0.26*F))/0.24;
            cout << "To get an A you need to get a \033[0;92m" << AVG_2 << "\033[0m on exam 2 \n";
            if (AVG_2 > 112)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";
        }
        else if (F < 0)
        {
            cout << "\n\033[0;93mAverage 1 Analysis \n\033[0m";
            AVG_1 = 70;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.09*Q + 0.07*P))/0.35;
            cout << "To get a C you need to get a \033[0;92m" << AVG_1 << "\033[0m on the final \n";
            if (AVG_1 > 112)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_1 = 80;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.09*Q + 0.07*P))/0.35;
            cout << "To get a B you need to get a \033[0;92m" << AVG_1 << "\033[0m on the final \n";
            if (AVG_1 > 112)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_1 = 90;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.09*Q + 0.07*P))/0.35;
            cout << "To get an A you need to get a \033[0;92m" << AVG_1 << "\033[0m on the final \n";
            if (AVG_1 > 112)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";


            cout << "\n\033[0;93mAverage 2 Analysis \n\033[0m";
            AVG_2 = 70;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.1*H + 0.09*Q + 0.07*P))/0.26;
            cout << "To get a C you need to get a \033[0;92m" << AVG_2 << "\033[0m on the final \n";
            if (AVG_2 > 112)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_2 = 80;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.1*H + 0.09*Q + 0.07*P))/0.26;
            cout << "To get a B you need to get a \033[0;92m" << AVG_2 << "\033[0m on the final \n";
            if (AVG_2 > 112)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_2 = 90;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.1*H + 0.09*Q + 0.07*P))/0.26;
            cout << "To get an A you need to get a \033[0;92m" << AVG_2 << "\033[0m on the final \n";
            if (AVG_2 > 112)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";
        }
        else if (H < 0)
        {
            cout << "\n\033[0;93mAverage 1 Analysis \n\033[0m";
            AVG_1 = 70;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.09*Q + 0.07*P + 0.35*F))/0.1;
            cout << "To get a C you need to get a \033[0;92m" << AVG_1 << "\033[0m on the homework \n";
            if (AVG_1 > 100)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_1 = 80;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.09*Q + 0.07*P + 0.35*F))/0.1;
            cout << "To get a B you need to get a \033[0;92m" << AVG_1 << "\033[0m on the homework \n";
            if (AVG_1 > 100)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_1 = 90;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.09*Q + 0.07*P + 0.35*F))/0.1;
            cout << "To get an A you need to get a \033[0;92m" << AVG_1 << "\033[0m on the homework \n";
            if (AVG_1 > 100)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";

            cout << "\n\033[0;93mAverage 2 Analysis \n\033[0m";
            AVG_2 = 70;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.09*Q + 0.07*P + 0.26*F))/0.1;
            cout << "To get a C you need to get a \033[0;92m" << AVG_2 << "\033[0m on your homework \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_2 = 80;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.09*Q + 0.07*P + 0.26*F))/0.1;
            cout << "To get a B you need to get a \033[0;92m" << AVG_2 << "\033[0m on your homework \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_2 = 90;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.09*Q + 0.07*P + 0.26*F))/0.1;;
            cout << "To get an A you need to get a \033[0;92m" << AVG_2 << "\033[0m on your homework \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";
        }
        else if (P < 0)
        {
            cout << "\n\033[0;93mAverage 1 Analysis \n\033[0m";
            AVG_1 = 70;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.09*Q + 0.35*F))/0.07;
            cout << "To get a C you need to get a \033[0;92m" << AVG_1 << "\033[0m on the project \n";
            if (AVG_1 > 100)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_1 = 80;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.09*Q + 0.35*F))/0.07;
            cout << "To get a B you need to get a \033[0;92m" << AVG_1 << "\033[0m on the project \n";
            if (AVG_1 > 100)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_1 = 90;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.09*Q + 0.35*F))/0.07;
            cout << "To get an A you need to get a \033[0;92m" << AVG_1 << "\033[0m on the project \n";
            if (AVG_1 > 100)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";
            
            cout << "\n\033[0;93mAverage 2 Analysis \n\033[0m";
            AVG_2 = 70;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.1*H + 0.09*Q + 0.26*F))/0.07;
            cout << "To get a C you need to get a \033[0;92m" << AVG_2 << "\033[0m on the project \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_2 = 80;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.1*H + 0.09*Q + 0.26*F))/0.07;
            cout << "To get a B you need to get a \033[0;92m" << AVG_2 << "\033[0m on the project \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_2 = 90;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.1*H + 0.09*Q + 0.26*F))/0.07;
            cout << "To get an A you need to get a \033[0;92m" << AVG_2 << "\033[0m on the project \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";
        }
        else if (Q < 0)
        {
            cout << "\n\033[0;93mAverage 1 Analysis \n\033[0m";
            AVG_1 = 70;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.07*P + 0.35*F))/0.09;
            cout << "To get a C you need to get a \033[0;92m" << AVG_1 << "\033[0m on the quizzes \n";
            if (AVG_1 > 100)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_1 = 80;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.07*P + 0.35*F))/0.09;
            cout << "To get a B you need to get a \033[0;92m" << AVG_1 << "\033[0m on the quizzes \n";
            if (AVG_1 > 100)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_1 = 90;
            AVG_1 = (AVG_1 - (0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.07*P + 0.35*F))/0.09;
            cout << "To get an A you need to get a \033[0;92m" << AVG_1 << "\033[0m on the quizzes \n";
            if (AVG_1 > 100)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";

            cout << "\n\033[0;93mAverage 2 Analysis \n\033[0m";
            AVG_2 = 70;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.1*H + 0.07*P + 0.26*F))/0.09;
            cout << "To get a C you need to get a \033[0;92m" << AVG_2 << "\033[0m on the quizzes \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get a C \n\033[0m";
            AVG_2 = 80;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.1*H + 0.07*P + 0.26*F))/0.09;
            cout << "To get a B you need to get a \033[0;92m" << AVG_2 << "\033[0m on the quizzes \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get a B \n\033[0m";
            AVG_2 = 90;
            AVG_2 = (AVG_2 - (0.24*E1 + 0.24*E2 + 0.1*H + 0.07*P + 0.26*F))/0.09;
            cout << "To get an A you need to get a \033[0;92m" << AVG_2 << "\033[0m on the quizzes \n";
            if (AVG_2 > 100)
                cout << "\033[0;91mIt is impossible to get an A \n\033[0m";
        }
        else
        {
            AVG_1 = 0.09*min(E1, E2) + 0.3*max(E1, E2) + 0.1*H + 0.09*Q + 0.07*P + 0.35*F;
            AVG_2 = 0.24*E1 + 0.24*E2 + 0.1*H + 0.09*Q + 0.07*P + 0.26*F;

            cout << "\n\033[0;93mAverage 1: \033[0;92m" << AVG_1 << endl;
            if (AVG_1 < 69)
                cout << "\033[0;91mWARNING: This is less than a C, you will not pass \n\033[0m";
            else if (AVG_1 < 79)
                cout << "\033[0;91mNOTICE: This is less than a B \n\033[0m";
            else if (AVG_1 < 89)
                cout << "\033[0;91mNOTICE: This is less than an A \n\033[0m";
            cout << "\033[0;93mAverage 2: \033[0;92m" << AVG_2 << endl;
            if (AVG_2 <= 69)
                cout << "\033[0;91mWARNING: This is less than a C, you will not pass \n\033[0m";
            else if (AVG_2 <= 79)
                cout << "\033[0;91mNOTICE: This is less than a B \n\033[0m";
            else if (AVG_2 <= 89)
                cout << "\033[0;91mNOTICE: This is less than an A \n\033[0m";
            double finalGrade = max(AVG_1, AVG_2);
            cout << "\n\033[0;93mYour grade is \033[0;92m" << finalGrade << " \033[0;93mwhich is a";
            if (finalGrade >= 90)
                cout << "n \033[0;92mA\n";
            else if (finalGrade > 79)
                cout << " \033[0;92mB\n";
            else if (finalGrade > 69)
                cout << " \033[0;92mC\n";
            else if (finalGrade > 59)
                cout << " \033[0;92mD\n";
            else
                cout << " \033[0;92mF\n";
        }

        cout << "\033[0;96mWould you like to try again with new values? (1 for yes, 0 for no): \033[0;95m";
        cin >> cont;
    } while (cont != 0);
    cout << "Farewell!\n";

    return 0; 

}