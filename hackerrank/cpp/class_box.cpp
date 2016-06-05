/**
Juliana Cavalcanti
Challenge by hackerrank: https://www.hackerrank.com/challenges/box-it
**/

class Box
{
private:
  int _l, _b, _h;

public:
    Box();
    Box(int l, int b, int h);
    Box(const Box &box);
    ~Box();

    int getLength() const;
    int getBreadth() const;
    int getHeight() const;
    long long CalculateVolume();

    bool operator < (const Box &b);
};

Box::Box() : _l(0), _b(0), _h(0) { BoxesCreated++; }

Box::Box(int l, int b, int h) : _l(l), _b(b), _h(h) { BoxesCreated++; }

Box::Box(const Box &box) {
    _l = box._l;
    _b = box._b;
    _h = box._h;
    BoxesCreated++;
}

Box::~Box() { BoxesDestroyed++; }

int Box::getLength() const { return _l; }

int Box::getBreadth() const { return _b; }

int Box::getHeight() const { return _h; }

long long Box::CalculateVolume() {
    return 1LL * _l * _h * _b; // 1LL forces multiplication result to be a long long
}

bool Box::operator < (const Box &box) {
    int l2 = box.getLength();
    int b2 = box.getBreadth();
    int h2 = box.getHeight();

    return ( _l < l2 || ( _l == l2 && ( _b < b2 || ( _b == b2 && _h < h2 ) ) ) );
}

// cannot pass by reference (const Box &box) because testcases expect a box to be created
ostream& operator << (ostream& out, Box box) {
    out << box.getLength() << " " << box.getBreadth() << " " << box.getHeight();
    return out;
}
