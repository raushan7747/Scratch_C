// Defining function
#include <stdio.h>

// sabse pehele agr hum PARAMETERS aur ARGUMENT ki agar baat karen to
// PARAMETERS hum use kehte hain jise hum kisi value ko input ya output ke liye uske variables declare karte hain
// ARGUMENT hum use kehte hain jo ki sirf humara value ho, bina kisi variables ke

// for example
/*
int x;  // "int", is a data type -> and
            "x", variable hai jisme integer type ka koi value jaise ki "20" "x" variable me jaakar store hoga

char ch; // to hume sabse pehle yeh batana hoga compiler ko ki hum jo use data de rhe, ya user se lene wale hain
            wah kis type ka hai -> integer, cahracter, ya float hai -> yeh batana parta hai

float Number; // aur yeh jo humara variable hai -> x, ch, Number in teeno me jaakar humara value store hoga
                to hume kisi bhi data ke input/output ke liye , -> sabse pehle use yeh batana hoga ki
                humara input kis type ka hai -> integer, float ya kisi aur type ka, uske baad
                jab hum user se data liye hain to use rakhenge kahan, -> phir use store karane ke liye hume
                ik container chahiye hoga ->

                yeh line dhyan se samajhna ->
                humara jo variables hota hai wah bas ik baar me kisi ik hi ARGUMENT (parameters ke thorugh pass ki gyi value) ko store karta hai
                PARAMETERS ke thorugh pass ki gyi value ka matlab hai ki ->

                [int x;] -> is poore ko hum PARAMETERS kahenge, seedha matlab keh sakte ki, input output ke conditions ko hum PARAMETER kehte hain

                [x] -> ka value agar maanlo humne 20 pass kiya, ya phir kisi formule se output jo hai wah jaakar humare
                is [x] me store hota hai to use hum ARGUMENT kehte hain

                ARGUMENT jab sabhi condtions yani ki PARAMETERS ko pass karte hue jab koi VALUE jaise ki
                [20, ya 23.445, ya shyam] is tarah ke value return karta hai to use hum ARGUMENT kahte hain.

*/

/*
function ko sahi tarika se likhne ka tarika yahi hai ki ->

sabse pehle hum use upar me -> main () ke upar , aur #include library ke neeche me hi declare karna hai

for example ->

#include <stdio.h>

void Learning_function (int x, char ch, float Number) // isme dekho humne, yahan function ko bas declare kiya
                                                      // yani ki compiler sabse pehle FUNCTION dekhega, aur 
                                                      aur usme hum use apne function ka type bata denge
                                                      ki humara function kis type ka ouput dega
                                                      kuchh ni dega to void, nhi to int, char, float
                                                      kuchh bhi le sakte

                                                      humne use bata diya humara function kis type ka hai ab
                                                      hum batayenge ki use humare function ka result kahan dena hai 
                                                      to hum uska varaible -> "Learning_function" me store krna chahte

                                                      humne use apne function ka type aur kahan store karna bata diye ->
                                                      phir hum apne function se kya kaam karwaana chahte use bhi hume batana hoga

                                                      to ab hum BRACKETS ke andar woh batayenge jo ki hum function se chahte hain ki 
                                                      wah hume yeh kaam kar ke de to use, -> hume yeh bhi batana hoga n ki hum usse jo
                                                      apna kaam karwane wale hain wah kis type ka hai (yani ki int, char, float) ab phir 
                                                      wah input lekar kahan store karega hume apna us kaam ke liye bhi variable(x, ch, Number)
                                                      woh bhi batana hoga.


                                                      SUMMARY: hume apne compiler ko har ik task ke liye, apne input/output ka type -> aur
                                                      input/output ko kahan store karna yeh batana parega,

                                                      ik variable bas ik hi kaam kar ke dega, to agar hume kuchh aur bhi kaam karwana hai
                                                      to hume uska bhi type aur variable batana hoga.

                                                      // jaisa ki example me dekhen:-
                                                      
                                                      void Learning_function (int x, char ch, float Number)

                                                      isme humne ik baar apne function ka type bataya, aur kis jagah pe store karna woh bhi bataya
                                                      uske baad hum is function se agar SUM karwana chahte to , woh SUM kiska karega -> uska type 
                                                      hume batana hoga ki [int] type ka hai aur humne use input [5] diya to use kahan store kare 
                                                      use bh batana hoga to hum [int x;] apne FUNCTION me as PARAMETERS(jo ki sirf type aur variable hoga)
                                                      pass kardenge.

                                                      ab humara function user se input lekar [x] me store karega, aur phir [x] jisme value humara maan le
                                                      [5] hai to wah [5] ko "Learning_function" variable me store karega

                                                      yani ki humara jo value [5] hai wah jaakar ke "Learning_function" naame ke variable me jaakar store 
                                                      hua hai, yani ki agar ab hume apna SUM ka result dekhna hai to hum "Learning_function" ke values ko
                                                      call karenge, to humara SUM "Learning_function" ke through hi return ho rha

                                                      yani ki yahan se hum yeh keh sakte hain ki humara function [void] hai wah kuchh bhi return nhi kar rha
                                                      RETURN to sirf "Learning_function" naam ka variable me store karega, aur jub hum us function ka naam lekar
                                                      usse "Learning_function" variable ka value puchhenge to hume wah [5] return karke de dega.


*/