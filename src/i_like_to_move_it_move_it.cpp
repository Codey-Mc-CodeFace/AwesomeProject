#include <vector>
#include <any>


struct UnstoppableForce {
    std::vector<int> data;
    UnstoppableForce() = default;
    UnstoppableForce( UnstoppableForce&& ) = default;
    UnstoppableForce( UnstoppableForce const& ) = default;
};

struct ImmovableObject{
    std::vector<int> data;
    ImmovableObject() = default;
    ImmovableObject( ImmovableObject const& ) = default;
};

void f( UnstoppableForce ) { /* ... */ }
void f( ImmovableObject ) { /* ... */ }
void h( UnstoppableForce const& ) { /* ... */ }


void what_happens_when_an_unstoppable_force_meets_an_immovable_object() {
    UnstoppableForce unstoppable;

    f( std::move( unstoppable ) );
    h( std::move( unstoppable ) );

    ImmovableObject immovable;

    f( std::move( immovable ) );

    UnstoppableForce const immutable;

    f( std::move( immutable ) );
}












struct Base {
    int a;
    template<typename T>
    explicit Base( T&& a ) : a( std::forward<T>( a ) ){}
};


template<typename T>
class A : public Base {
public:
    explicit A( T&& a ) : Base( std::move(a) ) {}
};


class B : public Base {
public:
    template<typename T>
    explicit B( T&& a ) : Base( std::move(a) ) {}
};





