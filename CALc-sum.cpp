#include <iostream>

class calc {
	public:
	
	int a, b, c, res;
	
	calc(int a=0, int b=0, int c=0, int res=0){
		this->a = a;
		this->b = b;
		this->c = c;
		this->res = res;
	}
	
	void resul(){
		res = a + b + c;
		cout << "el resultado es = " << res << std::endl;  
	}
};

using namespace std;

int main()
{
    int op;
    calc cal1;
    calc impr;
    cout << "quieres ingresar el valor de la sumatoria o ver los que tenenmos en la base de datos" << std::endl;
    cin >> op;
    if(op == 1) {
        cal1 = calc(23, 34, 45);
        impr = calc(cal1);
        impr.resul();
    } else if(op == 2) {
        int a, b, c;
        cout << "ingresa los valores acuerdate que son 3" << std::endl;
        scanf("%d %d %d", &a, &b, &c);
        cal1 = calc(a, b, c);
        impr = calc(cal1);
        impr.resul();
    }

    return 0;
}