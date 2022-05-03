ll binaryToDecimal(string s){
	ll ans=0;
	for(int i=0;i<s.length();++i){
		if(s[i]=='0'){
			ans=ans*2+0;
		}else{
			ans=ans*2+1;
		}
	}
	return ans;
}