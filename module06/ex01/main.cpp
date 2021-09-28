# include <iostream>


typedef struct s_Data {

    int         age;
    std::string name;
    std::string income;

}               Data;


uintptr_t serialize(Data *ptr) {

    uintptr_t raw;

    raw = reinterpret_cast< uintptr_t>(ptr);
    return (raw);
}

Data    *deserialize(uintptr_t raw) {

    Data *ptr;

    ptr = reinterpret_cast< Data *>(raw);
    return (ptr);
}


int main( void ) {

    Data *p = new Data;

    p->age = 10;
    p->income = "ffff";
    p->name = "dddd";

    uintptr_t raw = serialize(p);
    std::cout << raw << std::endl;

    Data *f;

    f = deserialize(raw);
    std::cout << p->age << " " << p->income << " " << p->name << std::endl;
    delete p;
    return (0);
}