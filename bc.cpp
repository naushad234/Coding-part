// binary and decmimal calculator??

#include<iostream>
using namespace std;
int BinToDec(int binNum){
    int ans=0,pow=1;
    while(binNum>0){
        int rem=binNum%10;
        ans+=rem*pow;
        binNum/=10;
        pow*=2;
    }
    return ans;
}
int DecToBin(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int addNum(int a, int b){
    int ans=a+b;
    return ans;
}
int subNum(int a,int b){
    int ans=a-b;
    return ans;
}
int mulNum(int a,int b){
    int ans=a*b;
    return ans;
}
float divNum(float a,float b){
    if(b=0){
        cout<<"Divide by Zero is Not Possible.."<<endl;
    }else{
        int ans=a/b;
        return ans;
    }
}
int main(){
int choice;
int Num;
cout<<"Welcome To Your Decimal Calculator:"<<endl;

do{
cout<<"[1]-"<<" Binary To Decimal "<<endl;
cout<<"[2]-"<<" Decimal To Binary" <<endl;
cout<<"[3]-"<<" Addition" <<endl;
cout<<"[4]-"<<" Subtraction" <<endl;
cout<<"[5]-"<<" Multiplication"<<endl;
cout<<"[6]-"<<" Division"<<endl;
cout<<"[7]-"<<" Mat Addition"<<endl;
cout<<"[8]-"<<" Mat Subtraction"<<endl;
cout<<"[9]-"<<" Mat Multiplication"<<endl;
cout<<"[10]-"<<"GST"<<endl;
cout<<"[11]-"<<"Factorial of Any Number."<<endl;
cout<<"[12]-"<<"Table for Any Number."<<endl;
cout<<"[13]-"<<" Exiting!!!.."<<endl;
cout<<"Enter Your Choice Between (1 And 13):"<<endl;
cin>> choice;
switch(choice){
        case 1:{
            cout<<"Enter Your Desire Number like(010)."<<endl;
            cin>>Num;
            cout<<"Decimal Number is."<<BinToDec(Num)<<endl;
            break;
        }
        case 2:{
            cout<<"Enter Your Desire Number like(20-30)."<<endl;
            cin>>Num;
            cout<<"Binary Number is:"<<DecToBin(Num)<<endl;
            break;
        }
        case 3:{
            int num1,num2;
            cout<<"Enter Two Number::"<<endl;
            cin>>num1>>num2;
            cout<<"Addition of "<<num1<<"And"<<num2<< "="<<addNum(num1,num2)<<endl;
            break;
        }
        case 4:{
            int num1,num2;
            cout<<"Enter Two Number.."<<endl;
            cin>>num1>>num2;
            cout<<"Subtraction of"<< num1 <<" "<<"And" <<" "<<num2<< "="<<subNum(num1,num2)<<endl;
            break;
        }
        case 5:{
            int a,b;
            cout<<"Enter ANy Two Number:"<<endl;
            cin>>a>>b;
            cout<<"MUltiplication of Number is:"<<mulNum(a,b)<<endl;
            break;
        }
        case 6:{
            float a,b;
            cout<<"Enter Any Two Number Of your Choice:"<<endl;
            cin>>a>>b;
            cout<<"Division Of Number is:"<<divNum(a,b)<<endl;
            break;
        }
        case 7:{
            int rows,cols;
            cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int mat1[100][100], mat2[100][100], result[100][100];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }

    cout << "Resultant matrix after addition:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    break;
}
    case 8:{
            int rows,col;
            cout<<"Enter Rows and Columns for the matrix:"<<endl;
            cin>>rows>>col;

            int mat1[100][100],mat2[100][100],result[100][100];
            cout<<"Enter The Number For first Mat:"<<endl;
            for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                    cin>>mat1[i][j];
                }
            }
            cout<<"Enter Second Mat Number:"<<endl;
            for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                    cin>> mat2[i][j];
                }
            }
            cout<<"After subtraction mat is:"<<endl;
            for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                    result[i][j]=mat1[i][j]- mat2[i][j];
                    cout<< result[i][j]<<" ";
                }
                cout<<endl;
            }
            break;
        }
        case 9:{
            int rows,col;
            cout<<"Enter the Number for Rows and Column:"<<endl;
            cin>>rows>>col;
            int mat1[100][100],mat2[100][100],result[100][100];
            cout<<"Enter the first Matrix Number:"<<endl;
            for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                    cin>>mat1[i][j];
                }
            }
            cout<<"Enter Second Matrix Number:"<<endl;
            for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                    cin>>mat2[i][j];
                }
            }
            cout<<"After the Matrix Multiplication.Matrix is:"<<endl;
            int i,j;
            for(i=0;i<rows;i++){
                for(j=0;j<col;j++){
                    result[i][j]= mat1[i][j]*mat2[j][i];
                    cout<<result[i][j] <<" ";
                }
            cout<<endl;
            }
            cout<<"❤️`-`-`-`-`-`-`-`-`-`-``-`-`-``❤️";
            break;
        }
        case 10:{
    float originalPrice, gstRate, gstAmount, finalPrice;

    // Input original price and GST rate
    cout << "Enter original price: ";
    cin >> originalPrice;

    cout << "Enter GST rate (%): ";
    cin >> gstRate;

    // Calculate GST amount
    gstAmount = (originalPrice * gstRate) / 100;

    // Final price after adding GST
    finalPrice = originalPrice + gstAmount;

    // Display results
    cout << "GST Amount: " << gstAmount << endl;
    cout << "Final Price (including GST): " << finalPrice << endl;
    break;

    }
    case 11:{
    int num,fact=1;
    cout<<"Enter a number:";
    cin>>num;
    if(num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for(int i=1; i<=num; i++) {
            fact *= i;
        }
        cout << "Factorial of " << num << " is: " << fact << endl;
    }
    break;
    }
        case 13:{
            cout<<"Exitingg....."<<endl;
            cout<<"Please Do Not Come Again..!!"<<endl;
            break;
        }
        default:
        cout<<"Invalid choice..(1 & 14)"<<endl;
    }
    cout<<endl;
    }while(choice!=14);

    return 0;
}