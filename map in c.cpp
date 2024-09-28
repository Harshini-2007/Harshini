#include <iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
   map<string,int> markmap;
   markmap["harry"]=90;
   markmap["hermy"]=98;
   map<string,int>:: iterator iter;
   markmap.insert({{"har",90},{"li",97}});
   for(iter=markmap.begin();iter!=markmap.end();iter++){
      cout<<(*iter).first<<"\t"<<(*iter).second<<endl;
   }
   cout<<markmap.empty();

    return 0;
}