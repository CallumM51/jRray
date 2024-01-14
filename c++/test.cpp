template <typename H> class Htets{
    H a;
    H b;
    H c;
    H d;
    public:
    Htets(H a, H b, H c, H d) : a(a), b(b), c(c), d(d) {}
};
int main(){
    auto b = Htets<int>(1, 2, 3, 4);
    return 0;
}