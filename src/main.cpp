#include<iostream>
#include<string>

std::string replaceNth(std::string text, int n, char old_value, char new_value){
        if(n <= 0){
                return text;
        }
        int count = 0;
        for(size_t i = 0;i < text.size();i++){
                if(text[i] == old_value){
                        count++;
                        if(count % n == 0){
                                text[i] = new_value;
                        }
                }
        }
        return text;
}

int main(){
        std::string text = "Vader said: No, i am your father!";

        int n = 2;
        char old_value = 'a';
        char new_value = 'o';

        std::string res = replaceNth(text, n, old_value,new_value);
        std::cout << res << std::endl;
}
