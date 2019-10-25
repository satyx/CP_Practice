#include<bits/stdc++.h>
using namespace std;

struct digit
{
    char d;
    digit *left;
    digit *right;
};

void padding_right(digit *p1,digit *p2,digit **current1,digit **current2)
{
    p1=p1->right;
    p2=p2->right;
    while(p1!=NULL || p2!=NULL)
    {
        if(p1==NULL)
        {
            digit *temp = new digit;
            temp->d = '0';
            temp->left=*current1;
            temp->right=NULL;
            p1=temp;
            (*current1)->right = temp;
            *current1 = temp;
        }
        else if(p2==NULL)
        {
            digit *temp = new digit;
            temp->d = '0';
            temp->left=*current2;
            temp->right=NULL;
            p2=temp;
            (*current2)->right = temp;
            *current2 = temp;
        }
        p1=p1->right;
        p2=p2->right;
    }
}

void padding_left(digit *p1,digit *p2,digit **first1,digit **first2)
{
    p1=p1->left;
    p2=p2->left;
    while(p1!=NULL || p2!=NULL)
    {
        if(p1==NULL)
        {
            digit *temp = new digit;
            temp->d = '0';
            temp->right=*first1;
            temp->left=NULL;
            p1=temp;
            (*first1)->left = temp;
            *first1 = temp;
        }
        else if(p2==NULL)
        {
            digit *temp = new digit;
            temp->d = '0';
            temp->right=*first2;
            temp->left=NULL;
            p2=temp;
            (*first2)->left = temp;
            *first2 = temp;
        }
        p1=p1->left;
        p2=p2->left;
    }
}


char addition_utility(char a,char b,char *carry)
{
    if(*carry=='0')
    {
        if(a=='0')
        {
            if(b=='0')
            {
                *carry='0';
                return '0';
            }
            if(b=='1')
            {
                *carry='0';
                return '1';
            }
            if(b=='2')
            {
                *carry='0';
                return '2';
            }
            if(b=='3')
            {
                *carry='0';
                return '3';
            }
            if(b=='4')
            {
                *carry='0';
                return '4';
            }
            if(b=='5')
            {
                *carry='0';
                return '5';
            }
            if(b=='6')
            {
                *carry='0';
                return '6';
            }
            if(b=='7')
            {
                *carry='0';
                return '7';
            }
            if(b=='8')
            {
                *carry='0';
                return '8';
            }
            if(b=='9')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='1')
        {
            if(b=='9')
            {
                *carry='1';
                return '0';
            }
            if(b=='0')
            {
                *carry='0';
                return '1';
            }
            if(b=='1')
            {
                *carry='0';
                return '2';
            }
            if(b=='2')
            {
                *carry='0';
                return '3';
            }
            if(b=='3')
            {
                *carry='0';
                return '4';
            }
            if(b=='4')
            {
                *carry='0';
                return '5';
            }
            if(b=='5')
            {
                *carry='0';
                return '6';
            }
            if(b=='6')
            {
                *carry='0';
                return '7';
            }
            if(b=='7')
            {
                *carry='0';
                return '8';
            }
            if(b=='8')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='2')
        {
            if(b=='8')
            {
                *carry='1';
                return '0';
            }
            if(b=='9')
            {
                *carry='1';
                return '1';
            }
            if(b=='0')
            {
                *carry='0';
                return '2';
            }
            if(b=='1')
            {
                *carry='0';
                return '3';
            }
            if(b=='2')
            {
                *carry='0';
                return '4';
            }
            if(b=='3')
            {
                *carry='0';
                return '5';
            }
            if(b=='4')
            {
                *carry='0';
                return '6';
            }
            if(b=='5')
            {
                *carry='0';
                return '7';
            }
            if(b=='6')
            {
                *carry='0';
                return '8';
            }
            if(b=='7')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='3')
        {
            if(b=='7')
            {
                *carry='1';
                return '0';
            }
            if(b=='8')
            {
                *carry='1';
                return '1';
            }
            if(b=='9')
            {
                *carry='1';
                return '2';
            }
            if(b=='0')
            {
                *carry='0';
                return '3';
            }
            if(b=='1')
            {
                *carry='0';
                return '4';
            }
            if(b=='2')
            {
                *carry='0';
                return '5';
            }
            if(b=='3')
            {
                *carry='0';
                return '6';
            }
            if(b=='4')
            {
                *carry='0';
                return '7';
            }
            if(b=='5')
            {
                *carry='0';
                return '8';
            }
            if(b=='6')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='4')
        {
            if(b=='6')
            {
                *carry='1';
                return '0';
            }
            if(b=='7')
            {
                *carry='1';
                return '1';
            }
            if(b=='8')
            {
                *carry='1';
                return '2';
            }
            if(b=='9')
            {
                *carry='1';
                return '3';
            }
            if(b=='0')
            {
                *carry='0';
                return '4';
            }
            if(b=='1')
            {
                *carry='0';
                return '5';
            }
            if(b=='2')
            {
                *carry='0';
                return '6';
            }
            if(b=='3')
            {
                *carry='0';
                return '7';
            }
            if(b=='4')
            {
                *carry='0';
                return '8';
            }
            if(b=='5')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='5')
        {
            if(b=='5')
            {
                *carry='1';
                return '0';
            }
            if(b=='6')
            {
                *carry='1';
                return '1';
            }
            if(b=='7')
            {
                *carry='1';
                return '2';
            }
            if(b=='8')
            {
                *carry='1';
                return '3';
            }
            if(b=='9')
            {
                *carry='1';
                return '4';
            }
            if(b=='0')
            {
                *carry='0';
                return '5';
            }
            if(b=='1')
            {
                *carry='0';
                return '6';
            }
            if(b=='2')
            {
                *carry='0';
                return '7';
            }
            if(b=='3')
            {
                *carry='0';
                return '8';
            }
            if(b=='4')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='6')
        {
            if(b=='5')
            {
                *carry='1';
                return '0';
            }
            if(b=='6')
            {
                *carry='1';
                return '1';
            }
            if(b=='7')
            {
                *carry='1';
                return '2';
            }
            if(b=='8')
            {
                *carry='1';
                return '3';
            }
            if(b=='9')
            {
                *carry='1';
                return '4';
            }
            if(b=='0')
            {
                *carry='0';
                return '5';
            }
            if(b=='1')
            {
                *carry='0';
                return '6';
            }
            if(b=='2')
            {
                *carry='0';
                return '7';
            }
            if(b=='3')
            {
                *carry='0';
                return '8';
            }
            if(b=='4')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='7')
        {
            if(b=='3')
            {
                *carry='1';
                return '0';
            }
            if(b=='4')
            {
                *carry='1';
                return '1';
            }
            if(b=='5')
            {
                *carry='1';
                return '2';
            }
            if(b=='6')
            {
                *carry='1';
                return '3';
            }
            if(b=='7')
            {
                *carry='1';
                return '4';
            }
            if(b=='8')
            {
                *carry='1';
                return '5';
            }
            if(b=='9')
            {
                *carry='1';
                return '6';
            }
            if(b=='0')
            {
                *carry='0';
                return '7';
            }
            if(b=='1')
            {
                *carry='0';
                return '8';
            }
            if(b=='2')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='8')
        {
            if(b=='2')
            {
                *carry='1';
                return '0';
            }
            if(b=='3')
            {
                *carry='1';
                return '1';
            }
            if(b=='4')
            {
                *carry='1';
                return '2';
            }
            if(b=='5')
            {
                *carry='1';
                return '3';
            }
            if(b=='6')
            {
                *carry='1';
                return '4';
            }
            if(b=='7')
            {
                *carry='1';
                return '5';
            }
            if(b=='8')
            {
                *carry='1';
                return '6';
            }
            if(b=='9')
            {
                *carry='1';
                return '7';
            }
            if(b=='0')
            {
                *carry='0';
                return '8';
            }
            if(b=='1')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='9')
        {
            if(b=='1')
            {
                *carry='1';
                return '0';
            }
            if(b=='2')
            {
                *carry='1';
                return '1';
            }
            if(b=='3')
            {
                *carry='1';
                return '2';
            }
            if(b=='4')
            {
                *carry='1';
                return '3';
            }
            if(b=='5')
            {
                *carry='1';
                return '4';
            }
            if(b=='6')
            {
                *carry='1';
                return '5';
            }
            if(b=='7')
            {
                *carry='1';
                return '6';
            }
            if(b=='8')
            {
                *carry='1';
                return '7';
            }
            if(b=='9')
            {
                *carry='1';
                return '8';
            }
            if(b=='0')
            {
                *carry='0';
                return '9';
            }

        }
    }

    if(*carry=='1')
    {
        if(a=='9')
        {
            if(b=='0')
            {
                *carry='1';
                return '0';
            }
            if(b=='1')
            {
                *carry='1';
                return '1';
            }
            if(b=='2')
            {
                *carry='1';
                return '2';
            }
            if(b=='3')
            {
                *carry='1';
                return '3';
            }
            if(b=='4')
            {
                *carry='1';
                return '4';
            }
            if(b=='5')
            {
                *carry='1';
                return '5';
            }
            if(b=='6')
            {
                *carry='1';
                return '6';
            }
            if(b=='7')
            {
                *carry='1';
                return '7';
            }
            if(b=='8')
            {
                *carry='1';
                return '8';
            }
            if(b=='9')
            {
                *carry='1';
                return '9';
            }
        }
        if(a=='0')
        {
            if(b=='9')
            {
                *carry='1';
                return '0';
            }
            if(b=='0')
            {
                *carry='0';
                return '1';
            }
            if(b=='1')
            {
                *carry='0';
                return '2';
            }
            if(b=='2')
            {
                *carry='0';
                return '3';
            }
            if(b=='3')
            {
                *carry='0';
                return '4';
            }
            if(b=='4')
            {
                *carry='0';
                return '5';
            }
            if(b=='5')
            {
                *carry='0';
                return '6';
            }
            if(b=='6')
            {
                *carry='0';
                return '7';
            }
            if(b=='7')
            {
                *carry='0';
                return '8';
            }
            if(b=='8')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='1')
        {
            if(b=='8')
            {
                *carry='1';
                return '0';
            }
            if(b=='9')
            {
                *carry='1';
                return '1';
            }
            if(b=='0')
            {
                *carry='0';
                return '2';
            }
            if(b=='1')
            {
                *carry='0';
                return '3';
            }
            if(b=='2')
            {
                *carry='0';
                return '4';
            }
            if(b=='3')
            {
                *carry='0';
                return '5';
            }
            if(b=='4')
            {
                *carry='0';
                return '6';
            }
            if(b=='5')
            {
                *carry='0';
                return '7';
            }
            if(b=='6')
            {
                *carry='0';
                return '8';
            }
            if(b=='7')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='2')
        {
            if(b=='7')
            {
                *carry='1';
                return '0';
            }
            if(b=='8')
            {
                *carry='1';
                return '1';
            }
            if(b=='9')
            {
                *carry='1';
                return '2';
            }
            if(b=='0')
            {
                *carry='0';
                return '3';
            }
            if(b=='1')
            {
                *carry='0';
                return '4';
            }
            if(b=='2')
            {
                *carry='0';
                return '5';
            }
            if(b=='3')
            {
                *carry='0';
                return '6';
            }
            if(b=='4')
            {
                *carry='0';
                return '7';
            }
            if(b=='5')
            {
                *carry='0';
                return '8';
            }
            if(b=='6')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='3')
        {
            if(b=='6')
            {
                *carry='1';
                return '0';
            }
            if(b=='7')
            {
                *carry='1';
                return '1';
            }
            if(b=='8')
            {
                *carry='1';
                return '2';
            }
            if(b=='9')
            {
                *carry='1';
                return '3';
            }
            if(b=='0')
            {
                *carry='0';
                return '4';
            }
            if(b=='1')
            {
                *carry='0';
                return '5';
            }
            if(b=='2')
            {
                *carry='0';
                return '6';
            }
            if(b=='3')
            {
                *carry='0';
                return '7';
            }
            if(b=='4')
            {
                *carry='0';
                return '8';
            }
            if(b=='5')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='4')
        {
            if(b=='5')
            {
                *carry='1';
                return '0';
            }
            if(b=='6')
            {
                *carry='1';
                return '1';
            }
            if(b=='7')
            {
                *carry='1';
                return '2';
            }
            if(b=='8')
            {
                *carry='1';
                return '3';
            }
            if(b=='9')
            {
                *carry='1';
                return '4';
            }
            if(b=='0')
            {
                *carry='0';
                return '5';
            }
            if(b=='1')
            {
                *carry='0';
                return '6';
            }
            if(b=='2')
            {
                *carry='0';
                return '7';
            }
            if(b=='3')
            {
                *carry='0';
                return '8';
            }
            if(b=='4')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='5')
        {
            if(b=='4')
            {
                *carry='1';
                return '0';
            }
            if(b=='5')
            {
                *carry='1';
                return '1';
            }
            if(b=='6')
            {
                *carry='1';
                return '2';
            }
            if(b=='7')
            {
                *carry='1';
                return '3';
            }
            if(b=='8')
            {
                *carry='1';
                return '4';
            }
            if(b=='9')
            {
                *carry='1';
                return '5';
            }
            if(b=='0')
            {
                *carry='0';
                return '6';
            }
            if(b=='1')
            {
                *carry='0';
                return '7';
            }
            if(b=='2')
            {
                *carry='0';
                return '8';
            }
            if(b=='3')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='6')
        {
            if(b=='3')
            {
                *carry='1';
                return '0';
            }
            if(b=='4')
            {
                *carry='1';
                return '1';
            }
            if(b=='5')
            {
                *carry='1';
                return '2';
            }
            if(b=='6')
            {
                *carry='1';
                return '3';
            }
            if(b=='7')
            {
                *carry='1';
                return '4';
            }
            if(b=='8')
            {
                *carry='1';
                return '5';
            }
            if(b=='9')
            {
                *carry='1';
                return '6';
            }
            if(b=='0')
            {
                *carry='0';
                return '7';
            }
            if(b=='1')
            {
                *carry='0';
                return '8';
            }
            if(b=='2')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='7')
        {
            if(b=='2')
            {
                *carry='1';
                return '0';
            }
            if(b=='3')
            {
                *carry='1';
                return '1';
            }
            if(b=='4')
            {
                *carry='1';
                return '2';
            }
            if(b=='5')
            {
                *carry='1';
                return '3';
            }
            if(b=='6')
            {
                *carry='1';
                return '4';
            }
            if(b=='7')
            {
                *carry='1';
                return '5';
            }
            if(b=='8')
            {
                *carry='1';
                return '6';
            }
            if(b=='9')
            {
                *carry='1';
                return '7';
            }
            if(b=='0')
            {
                *carry='0';
                return '8';
            }
            if(b=='1')
            {
                *carry='0';
                return '9';
            }
        }
        if(a=='8')
        {
            if(b=='1')
            {
                *carry='1';
                return '0';
            }
            if(b=='2')
            {
                *carry='1';
                return '1';
            }
            if(b=='3')
            {
                *carry='1';
                return '2';
            }
            if(b=='4')
            {
                *carry='1';
                return '3';
            }
            if(b=='5')
            {
                *carry='1';
                return '4';
            }
            if(b=='6')
            {
                *carry='1';
                return '5';
            }
            if(b=='7')
            {
                *carry='1';
                return '6';
            }
            if(b=='8')
            {
                *carry='1';
                return '7';
            }
            if(b=='9')
            {
                *carry='1';
                return '8';
            }
            if(b=='0')
            {
                *carry='0';
                return '9';
            }

        }
    }

}


//string summation(digit *current1,*current)
string addition(digit *p1,digit *p2,string *dash, bool *carry_flag)           //Addition of numbers
{
    string res="";
    char carry ='0';
    while(p1!=NULL && p2!=NULL)
    {
        *dash+='-';
        if(p1->d=='.' && p2->d=='.')
        {
            res = '.'+res;
            p1=p1->left;
            p2=p2->left;
            continue;
        }
        char digit_sum= addition_utility(p1->d,p2->d,&carry);
        res=digit_sum+res;
        p1=p1->left;
        p2=p2->left;

    }
    if(carry!='0')
    {
        *carry_flag=true;
        res=carry+res;
    }
    return res;
}

void display(digit *t1,digit *t2,string res, string dash,bool carry_flag)
{
    cout<<"  ";
    while(t1!=NULL)
    {
        cout<<t1->d;
        t1=t1->right;
    }
    cout<<endl<<"+ ";

    while(t2!=NULL)
    {
        cout<<t2->d;
        t2=t2->right;
    }
    cout<<endl;
    cout<<dash<<endl;
    if(carry_flag)
        cout<<" ";
    else
        cout<<"  ";
    cout<<res<<endl;
}

int main()
{
    ifstream fl;
    fl.open("input.txt");
    digit *first1=NULL,*temp=NULL,*current1=NULL,*t1=NULL;
    digit *first2=NULL,*current2=NULL,*t2=NULL;
    digit *decimal1=NULL,*decimal2=NULL;

    while(fl.is_open())         //First Number Input
    {
        char ch;
        fl.get(ch);
        if(ch=='\n')
            break;
        if(first1==NULL)
        {
            first1 = new digit;
            first1->d = ch;
            first1->left = NULL;
            first1->right = NULL;
            current1 =first1;
            if(ch=='.')
                decimal1 = first1;
        }
        else
        {
            temp = new digit;
            temp->d = ch;
            temp->left = current1;
            current1->right = temp;
            temp->right = NULL;
            current1 = temp;
            if(ch=='.')
                decimal1 = temp;
        }
        
    }
    
    while(fl.is_open())             //Second Number Input
    {
        char ch;
        fl.get(ch);
        if(ch=='\n')
            break;

        if(first2==NULL)
        {
            first2 = new digit;
            first2->d = ch;
            first2->left = NULL;
            first2->right = NULL;
            current2 =first2;
            if(ch=='.')
                decimal2 = first2;
        }
        else
        {
            temp = new digit;
            temp->d = ch;
            temp->left = current2;
            current2->right = temp;
            temp->right = NULL;
            current2 = temp;
            if(ch=='.')
                decimal2 = temp;
        }
        
    }
    if(decimal1!=NULL || decimal2!=NULL)            // Preprocessing
    {
        if(decimal1==NULL)                          // Transforming inputs("12" & "1.2342" into "12." & "1.2343") by decimal inclusion
        {
            digit *temp = new digit;
                temp->d = '.';
                temp->left=current1;
                temp->right=NULL;
                current1->right = temp;
                current1 = temp;
                decimal1=temp;
        }
        
        if(decimal2==NULL)                          // Transforming inputs("12.234" & "1" into "12.234" & "1.") by decimal inclusion
        {
            digit *temp = new digit;
            temp->d = '.';
            temp->left=current2;
            temp->right=NULL;
            current2->right = temp;
                current2 = temp;
            decimal2 = temp;
        }
        if(first1==decimal1)                        // Transforming inputs(".234" & "1.453" into "0.234" & "1.453") by inclusion of digit before decimal
        {
            digit *temp = new digit;
            temp->d = '0';
            temp->right=first1;
            temp->left=NULL;
            first1->left = temp;
            first1 = temp;
        }
        if(first2==decimal1)                        // Transforming inputs("2.34" & ".453" into "2.34" & "0.453") by inclusion of digit before decimal
        {
            digit *temp = new digit;
            temp->d = '0';
            temp->right=first2;
            temp->left=NULL;
            first2->left = temp;
            first2 = temp;
        }
        if(current1==decimal1)                      // Transforming inputs("23." & "1.453" into "23.0" & "1.453")by inclusion of digit after decimal
        {
            digit *temp = new digit;
            temp->d = '0';
            temp->left=current1;
            temp->right=NULL;
            current1->right = temp;
            current1 = temp;
        }
        if(current2==decimal2)                      // Transforming inputs("23.64" & "53." into "23.64" & "53.0")by inclusion of digit after decimal
        {
            digit *temp = new digit;
            temp->d = '0';
            temp->left=current2;
            temp->right=NULL;
            current2->right = temp;
            current2 = temp;
        }
    }

    if(decimal1==NULL && decimal2==NULL)            //Integer Addition
    {
        padding_left(current1,current2,&first1,&first2);
    }
    else                                            //Non Integer
    {
        padding_right(decimal1,decimal2,&current1,&current2);
        padding_left(decimal1,decimal2,&first1,&first2);

    }
   
   
    string dash="----";     //Output formatting    
    fl.close();
    bool carry_flag = false;     //Output Formatting
    string res = addition(current1,current2,&dash,&carry_flag);
    display(first1,first2,res,dash,carry_flag);
    return 0;
}