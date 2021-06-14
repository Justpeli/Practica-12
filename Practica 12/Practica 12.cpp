// Practica 12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int decision = 0;
int decision1 = 0;
int decision2 = 0;
int decision3 = 0;
int decision4 = 0;
int rejugar = 0;
bool final1 = false;
bool final2 = false;
bool final3 = false;
bool final4 = false;
bool final5 = false;
bool final6 = false;
int finales = 0;



int main()
{

        cout << "Bienvenido a la historia peor contada :D\n";
        cout << "Son las 3 de la mañana estas dormido en tu cuarto y escuchas un ruido en el patio\n";
        cout << "Que decides hacer?\n";
        cout << "1- Ir a ver 2- Volver a dormir\n";
        cin >> decision;
        if (decision == 1)
        {
            cout << "Te das cuenta que hay un aparato brillante y parpadea con una luz roja\n";
            cout << "Que decides hacer?\n";
            cout << "1- Acercarte y tocarlo 2- Ignorarlo y Volver a dormir\n";
            cin >> decision1;
            if (decision1 == 1)
            {
                cout << "Se abre una compuerta dentro del aparato brillante\n";
                cout << "Que decides hacer\n";
                cout << "1- Acercarte aun mas para observar de cerca 2-Dormir y pretendender que nada pasa\n";
                cin >> decision2;
                if (decision2 == 1)
                {
                    cout << "Sale un bicho verde malherido del aparato y te pide ayuda\n";
                    cout << "Que decides hacer\n";
                    cout << "1- Ayudar al extraterrestre 2-Lanzarlo al patio del vecino y que se lo coma el perro\n";
                    cin >> decision3;
                    if (decision3 == 1)
                    {
                        cout << "Lo llevas a tu casa y lo cuidas\n 3 Meses despues\n";
                        cout << "El extraterrestre se siente mucho mejor y te empieza a contar la historia de por que esta aqui\n";
                        cout << "El tiene la mision de destruir el planeta y cuando iba entra entrando en orbita los sistemas de defensa del planeta lo detectaron y le dispararon, pero vio que tu raza tiene potencial gracias a tu potencial, por eso te da a elegir el futuro de tu raza: \n";
                        cout << "1-La destruccion absoluta de tu raza 2- Te destruye a ti pero tu raza sobrevive\n";
                        cin >> decision4;
                        if (decision4 == 1 && !final1)
                        {
                            cout << "La humanidad acaba de desaparecer\n";
                            finales++;
                            final1 = true;
                        }
                        else if (decision4 == 1 && final1)
                        {
                            cout << "Final repetido\n";
                        }
                        if (decision4 != 1 && !final2)
                        {
                            cout << "La humanidad sobrevivio pero tu moriste UnU\n";
                            finales++;
                            final2 = true;
                        }
                        else if (decision4 != 1 && final2)
                        {
                            cout << "Final repetido\n";
                        }

                    }
                    else
                    {
                        if (decision3 != 1 && !final3)
                        {
                            cout << "Te vuelves a dormir y el perro de tu vecino ahora es tu amigo :) (FIN?)\n";
                            final3 = true;
                            finales++;
                        }
                        else if (decision3 != 1 && final3)
                        {
                            cout << "Final repetido\n";
                        }


                    }
                }
                else
                {
                    if (decision2 != 1 && !final4)
                    {
                        cout << "Te vuelves a dormir y no paso nada :) (FIN???)\n";
                        final4 = true;
                        finales++;
                    }
                    else if (decision2 != 1 && final4)
                    {
                        cout << "Final repetido\n";
                    }

                }

            }
            else
            {
                if (decision1 != 1 && !final5)
                {
                    cout << "Te vuelves a dormir y no paso nada :) (FIN??)\n";
                    final5 = true;
                    finales++;
                }
                else if (decision1 != 1 && final5)
                {
                    cout << "Final repetido\n";
                }
            }

        }
        else
        {
            if (decision != 1 && !final6)
            {
                cout << "Te vuelves a dormir y no paso nada :) (FIN?)\n";
                final6 = true;
                finales++;
            }
            else if (decision != 1 && final6)
            {
                cout << "Final repetido\n";
            }

        }
        system("pause");
        system("cls");
        if (finales < 6)
        {
            cout << "Tienes " << finales << " /6 Finales desbloqueados\n";
            cout << "Volver a jugar? 1-Si 2-No\n";
            cin >> rejugar;
            if (rejugar == 1)
            {
                system("cls");
                return main();
            }
            else
            {

                return 0;
            }
        }
        else if (finales == 6)
        {
            cout << "Felicidades desbloqueaste todos los finales :D\n";
            cout << "Volver a jugar? 1-Si 2-No\n";
            cin >> rejugar;
            if (rejugar == 1)
            {
                system("cls");
                return main();
            }
            else
            {

                return 0;
            }

        }
}