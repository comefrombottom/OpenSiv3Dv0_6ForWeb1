# include <Siv3D.hpp>

double f(double x){
    return x * x;
}



void Main()
{
    Camera2D camera;


    
    
    while (System::Update())
    {
        camera.update();
        auto tf = camera.createTransformer();
        double pre_t = -10;
        double pre_y = f(pre_t);
        
        for (double t = -10; t < 10; t += 0.1) {
            double y = f(t);
            Line{ pre_t * 10,pre_y * 10,t * 10,y * 10 }.draw();
            pre_t = t;
            pre_y = y;
        }
        camera.draw();
    }
}
