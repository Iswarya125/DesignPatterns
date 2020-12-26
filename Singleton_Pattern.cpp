#include <iostream>

class singleObject
{
    private:

        static singleObject *new_instance;
        singleObject()
        {
        }
    
    public:

        int abc;
        void print()
        {
            std::cout<<this->abc<<std::endl;
        }
        static singleObject* getInstance()
        {
            if(!new_instance)
            {
                new_instance = new singleObject;
            }
            return new_instance;
        }
};

singleObject* singleObject::new_instance =nullptr;

int main()
{
    singleObject::getInstance()->abc = 100;
    singleObject::getInstance()->print();
    return 0;
}