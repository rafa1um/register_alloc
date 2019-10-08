#include <iostream>

int main()
{
    std::ifstream file( "sample.txt" );

    std::string line;
    while( std::getline( file, line ) )   
    {
        std::istringstream iss( line );

        std::string result;
        if( std::getline( iss, result , '=') )
        {
            if( result == "foo" )
            {
                std::string token;
                while( std::getline( iss, token, ',' ) )
                {
                    std::cout << token << std::endl;
                }
            }
            if( result == "bar" )
            {
               //...
    }
}