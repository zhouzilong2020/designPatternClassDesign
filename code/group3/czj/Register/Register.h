#include <iostream>
using namespace std;


//注册树模式
class  Register
{
    //这个变量应该能是全局的
protected:
    static $trees;
    //注册到注册树上方法
    public static function set($alias, $obj)
    {
        self::$trees[$alias] = $obj;
    }

    //获取对象
    public static function get($alias)
    {
        return self::$trees[$alias];
    }

    //释放注册对象
    public function _unset($alias)
    {
        unset(self::$trees[$alias]);
    }
}
