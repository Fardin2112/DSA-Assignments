Hacker rank algorithms solutions
warmup
Q 1 solve me first:add of two numbers
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
 int sum=a+b;
 return sum;
  
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}

Q2 sum of array
//worked on only function
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int simpleArraySum(vector<int> ar) {
    int sum=0;
    for(int i;i<ar.size();i++){
        sum+=ar[i];
    }
return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ar_count_temp;
    getline(cin, ar_count_temp);

    int ar_count = stoi(ltrim(rtrim(ar_count_temp)));

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split(rtrim(ar_temp_temp));

    vector<int> ar(ar_count);

    for (int i = 0; i < ar_count; i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = simpleArraySum(ar);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
Q3 a very big sum
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long aVeryBigSum(vector<long> ar) {
    int n=ar.size();
    long int sum=0;
    for(int i=0;i<ar.size();i++){
        sum+=ar[i];
    }
    cout<<sum<<" "<<endl;
return sum;
}

int main()
{
 vector<long>ar;
 long element;
 int size;
 cin>>size;
 for(int i=0;i<size;i++){
     cin>>element;
     ar.push_back(element);
 }
  aVeryBigSum( ar);
}

Q4 plus minus
//worked at only in function:
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
   
    float n=arr.size();
    float pos_num=0;
    float neg_num=0;
    float zero_num=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            pos_num++;
        }else if(arr[i]<0){
            neg_num++;
        }else{
            zero_num++;
        }
    }
        
        cout<<setprecision(6)<<pos_num/n<<endl;
        cout<<setprecision(6)<<neg_num/n<<endl;
        cout<<setprecision(6)<<zero_num/n<<endl;
       
}




int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

Q5 mini-max_sum
//sort(arr.begin(),arr.end()) used to sorting array for ascending order
//you can reverse(arr.begin(),arr.end()) after sort for decreasing order
#include <bits/stdc++.h>
using namespace std;
int main() 
{
int val,i;
long long int sum=0;
vector<int> array;
for(i=0; i<5; i++)
{
        cin>>val;
        sum+=val;

        array.push_back(val);
}

        sort(array.begin(), array.end());   
        

        cout<<sum-array[4]<<" "<<sum-array[0];  
        return 0;
}

Q6 coompare the triplets
//worked at only in fuction
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> vec1, vector<int> vec2) {
vector<int>newvec;
int alice=0;
int bob=0;

    for(int i=0;i<3;i++){
      
           if(vec1[i]>vec2[i]){
             alice++;
           }
           else if(vec1[i]<vec2[i]){
                bob++;
           }
    }
   newvec.push_back(alice);
   newvec.push_back(bob);
  return newvec;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(3);

    for (int i = 0; i < 3; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    string b_temp_temp;
    getline(cin, b_temp_temp);

    vector<string> b_temp = split(rtrim(b_temp_temp));

    vector<int> b(3);

    for (int i = 0; i < 3; i++) {
        int b_item = stoi(b_temp[i]);

        b[i] = b_item;
    }

    vector<int> result = compareTriplets(a, b);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}


Q7 staircase

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,staircase;
    cin>>n;
    staircase=n-1;
    for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        if(i>=staircase){
            cout<<"#";
        }else {
        cout<<" ";
        }
    }
        staircase--;
        cout<<endl;
    }
    return 0;
}
Q8 birthday cake candle


#include <bits/stdc++.h>

using namespace std;
int bignum(vector<int>vec){
    return *max_element(vec.begin(),vec.end());
}
int main(){
    vector<int>candles;
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        candles.push_back(element);
    }
    int num=0;
    int MAX=bignum(candles);
    for(int i=0;i<n;i++){
        if(MAX==candles[i]){
            num++;
        }
    }
    cout<<num;   
    return 0;
}
Q9 diagonal difference:
#include <bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1+=arr[i][j];
            }
        if(i+j==n-1&&arr[1][1]){
            sum2+=arr[i][j];
        }
        }
    }
     int diff=abs(sum1-sum2);
     cout<<diff;
     
    return 0;
}


Q10 time conversion :
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int hh,mm,ss;
    int n= s.length();
    hh=(s[0]-'0')*10+(s[1]-'0');
    mm=(s[3]-'0')*10+(s[4]-'0');
    ss=(s[6]-'0')*10+(s[7]-'0');
    
    if(hh<12&&s[8]=='P'){
        hh=hh+12;
    }
    if(hh==12&&s[8]=='A'){
        hh=0;
    }
    printf("%02d:%02d:%02d \n",hh,mm,ss);
}


