#include<iostream>
#include<vector>
#include<cstring>
using namespace std;


class Emperor {
    private:
        static const int maxNumberOfEmperor=3;
        static vector<string> emperorInfoList;
        static vector<int> emperorList;
        static int countNumOfEmperor;
        //防止类被实例化
        Emperor() { 
        }
        //同上
        Emperor(string info) {
            emperorInfoList.push_back(info);
        }
 
    // //最先执行
    // static {
    //     //动态创建指定个数的示例
    //     for (int i = 0; i < maxNumberOfEmperor; i++) {
    //         emperorList.add(new Emperor("皇" + (i + 1) + "帝"));
    //     }
 
    // }
 
    

    
    public:
        static Emperor getInstance() {
            Random random = new Random();
            countNumOfEmperor = random.nextInt(maxNumberOfEmperor);
            return (Emperor) emperorList.get(countNumOfEmperor);
        }
    
        void emperorInfo() {
            System.out.println(emperorInfoList.get(countNumOfEmperor));
        }
}

