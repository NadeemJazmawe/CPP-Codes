#ifndef RANGE_HPP
#define RANGE_HPP

namespace iterable{
    template<typename T> 
    class range{
        T _start , _end ;
        
        public :
            typedef T value_type;
            range(const T a , const T b):_start(a) , _end(b){}

            class const_iterator{
                T cur;
                
                public:
                    const_iterator(const T &s) : cur(s){}
                    
                    const T operator *() const{return cur;}
                    const_iterator & operator ++(){
                        cur++;
                        return *this;
                        }

                    const const_iterator & operator++(int){
                        const_iterator temp = *this;
                        cur++;
                        return temp;
                    }

                    bool operator ==(const const_iterator& other) const{
                         return (cur == other.cur);
                    }
                   

                    bool operator !=(const const_iterator &other) const{
                        return this->cur != other.cur;
                    }
            };
            const_iterator begin() const{return const_iterator(_start);}
            const_iterator end() const{return const_iterator(_end);}
            

    };



}
#endif