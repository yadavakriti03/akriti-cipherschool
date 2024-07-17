#include<iostream>
using namespace std;

int main(){
	string text;
	text="Hi guys  how are you doing today,did you get time to watch the new spiderverse film";
	int freq[26];
	int i;
	
	for(i=0;i<26;i++) freq[i]=0;
	
	for(i=0;i<text.length();i++){
		if(text[i]!=' '){
			freq[text[i]-'a']++;
		}
	}
	char temp;
	int max;
	
	for(i=0,temp='a';i<26;i++){
		cout<<"the frequency of the character"<<temp<<" is"<<freq[i]<<endl;
		temp++;
	}
	
}
