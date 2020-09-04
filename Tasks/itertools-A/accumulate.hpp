#ifndef _ACCUMULATE_HPP
#define _ACCUMULATE_HPP
#include <iostream>
#include<vector>
#include<string>
namespace itertools{

    typedef struct{
        template <typename T>
        T operator ()(T a, T b) const{
            return a+b;
        }
    } plus;
    template<typename T , typename L= plus> 
    class accumulate{
        T _set;
        L lambda;
        public :            
            accumulate(const T a, L l = plus()):_set(a), lambda(l){}

            class const_iterator{
                typename T::const_iterator cur;
                typename T::const_iterator start, _end;
                typename T::value_type  data;
                L _lambda;
                public:
                    const_iterator(const typename T::const_iterator &s, const typename T::const_iterator &e ,  L lam) 
                    : cur(s) , start(s) , _end(e) , _lambda(lam){
                    }
                    
                     const auto operator *() const{
                         if(cur == start)
                            return *cur;
                         return data;
                    }

                    const_iterator & operator ++(){
                       // std::cout<<data<<std::endl;
                        if(cur == start){
                            data = *cur;  
                        }
                        ++cur;
                        if(cur != _end){
                            data = _lambda(data , *cur);
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
            const_iterator begin() const{return const_iterator(_set.begin(), _set.end() ,lambda);}
            const_iterator end() const{return const_iterator(_set.end(), _set.end() , lambda);}
            

    };


}

#endif
