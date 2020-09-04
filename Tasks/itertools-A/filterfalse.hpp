#ifndef _FILTER
#define _FILTER
#include <iostream>
#include<vector>
namespace itertools{
    typedef struct{
    template <typename T>
    bool operator ()(T a) const{
            if(a%2 ==0)
                return true;
            return false;
        }
    } even;

    template< typename L , typename T > 
    class filterfalse{
        T _set;
        L lambda;
        public :            

            filterfalse(L l , const T a):_set(a), lambda(l){}

            class const_iterator{
                typename T::const_iterator cur;
                typename T::const_iterator _end;
                L _lambda;
                public:
                    const_iterator(const typename T::const_iterator &s, const typename T::const_iterator &e, L lam) : cur(s) , _end(e), _lambda(lam){
                    }
                    
                     auto operator *() {// <{5}, {5, 6}, {5, 6, 7}> [](int a, int b){return a+b;}
                        return *cur;
                     }

                    const_iterator & operator ++(){
                        ++cur;
                        while(_lambda(*cur) && cur != _end){
                            ++cur;
                        }
                        return *this;
                        }

                    const const_iterator & operator++(int){
                        const_iterator temp = *this;
                        const_iterator::operator++();
                        return temp;
                    }

                    bool operator ==(const const_iterator &other){
                        return this->cur == other.cur;
                    }

                    bool operator !=(const const_iterator &other){
                        return this->cur != other.cur;
                    }
            };
            const_iterator begin() const{return const_iterator(_set.begin(), _set.end(), lambda);}
            const_iterator end() const{return const_iterator(_set.end(), _set.end(), lambda);}
            

    };


}

#endif
