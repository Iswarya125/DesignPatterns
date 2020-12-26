#include <iostream>
#include <cstring>
//Abstract Class shape

class shape
{
    public:
        virtual void draw()
        {

        }
};

class circle : public shape
{
    void draw() override
    {
        std::cout<<"Circle is drawn"<<std::endl;
    }
};

class rectange : public shape
{
    void draw() override
    {
        std::cout<<"Rectange is drawn"<<std::endl;
    }
};

class square : public shape
{
    void draw() override
    {
        std::cout<<"Square is drawn"<<std::endl;
    }
};

class shapeFactory
{
    public:
        
        static shape* createShapes(const char* inputShapes)
        {
            if((strcmp(inputShapes,"Circle") == 0))
            {
                return new circle;
            }
            else if((strcmp(inputShapes,"Rectangle") == 0))
            {
                return new rectange;
            }
            else if((strcmp(inputShapes,"Square") == 0))
            {
                return new square;
            }
            else
            {
                /* code */
            }
            
        }
};

int main()
{
    shape* circleObj = shapeFactory::createShapes("Circle");
    circleObj->draw();
    delete circleObj;
    return 0;
}