/*
p21.cpp
Zahir Ali
10/15/23-10/17/23
Program Description: Conversion Table that converts kilograms to pounds 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Create a list of kilograms (1-99)
  int kilograms[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161, 163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193, 195, 197, 199};

  // Create a list of pounds 
  double pounds[sizeof(kilograms) / sizeof(kilograms[0])];
  for (int i = 0; i < sizeof(kilograms) / sizeof(kilograms[0]); i++) {
    pounds[i] = kilograms[i] * 2.20462262185;
  }

  // Round the values of pounds to the nearest tenths 
  for (int i = 0; i < sizeof(pounds) / sizeof(pounds[0]); i++) {
    pounds[i] = round(pounds[i] * 10.0) / 10.0;
  }

  // Print the conversion table (using the example code given)
  cout << left << setw(10) << "Kilograms" << setw(10) << "Pounds" << endl;
  for (int i = 0; i < sizeof(pounds) / sizeof(pounds[0]); i++) {
    cout << left << setw(10) << kilograms[i] << setw(10) << fixed << setprecision(1) << pounds[i] << endl;
  }

  return 0;
}
/*
Output of code: 
1         2.2       
3         6.6       
5         11.0      
7         15.4      
9         19.8      
11        24.3      
13        28.7      
15        33.1      
17        37.5      
19        41.9      
21        46.3      
23        50.7      
25        55.1      
27        59.5      
29        63.9      
31        68.3      
33        72.8      
35        77.2      
37        81.6      
39        86.0      
41        90.4      
43        94.8      
45        99.2      
47        103.6     
49        108.0     
51        112.4     
53        116.8     
55        121.3     
57        125.7     
59        130.1     
61        134.5     
63        138.9     
65        143.3     
67        147.7     
69        152.1     
71        156.5     
73        160.9     
75        165.3     
77        169.8     
79        174.2     
81        178.6     
83        183.0     
85        187.4     
87        191.8     
89        196.2     
91        200.6     
93        205.0     
95        209.4     
97        213.8     
99        218.3     
101       222.7     
103       227.1     
105       231.5     
107       235.9     
109       240.3     
111       244.7     
113       249.1     
115       253.5     
117       257.9     
119       262.4     
121       266.8     
123       271.2     
125       275.6     
127       280.0     
129       284.4     
131       288.8     
133       293.2     
135       297.6     
137       302.0     
139       306.4     
141       310.9     
143       315.3     
145       319.7     
147       324.1     
149       328.5     
151       332.9     
153       337.3     
155       341.7     
157       346.1     
159       350.5     
161       354.9     
163       359.4     
165       363.8     
167       368.2     
169       372.6     
171       377.0     
173       381.4     
175       385.8     
177       390.2     
179       394.6     
181       399.0     
183       403.4     
185       407.9     
187       412.3     
189       416.7     
191       421.1     
193       425.5     
195       429.9     
197       434.3     
199       438.7   
*/
