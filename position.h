#ifndef POSITION_H
#define POSITION_H


class position
{
    public:
        position(int x,int y);
        virtual ~position();
        int X();
        int Y();
        void setX(int x);
        void setY(int y);
    protected:
    private:
        int m_x;
        int m_y;
};

#endif // POSITION_H
