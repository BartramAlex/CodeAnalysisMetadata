
# BartramAlex

## Files
% ls

    Makefile
    README.md
    analysis_request.hpp
    code_analysis.cpp
    code_analysis.hpp
    code_analysis_t.cpp
    get_language_from_filename.cpp
    get_language_from_filename.hpp
    get_language_from_filename_t.cpp

## Changed files
% git diff baa2b2fa58cb52ada94597a9b2e5d687f6a3261f --name-only

    code_analysis_t.cpp

## Build
% make

    g++ -std=c++11 -c code_analysis_t.cpp
    code_analysis_t.cpp:43:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:53:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:66:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:80:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:90:7: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    5 errors generated.
    make: *** [code_analysis_t.o] Error 1

## Test
% make test

    g++ -std=c++11 -c code_analysis_t.cpp
    code_analysis_t.cpp:43:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:53:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:66:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:80:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:90:7: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    5 errors generated.
    make: *** [code_analysis_t.o] Error 1

## Test Oracle: code\_analysis\_t.cpp
% cp ~collard/CodeAnalysisMetadataEvaluation/code_analysis_t.cpp .  
% make

    g++ -std=c++11 -c code_analysis_t.cpp
    g++ -std=c++11 -c code_analysis.cpp
    g++ -std=c++11 -c get_language_from_filename.cpp
    g++ code_analysis_t.o code_analysis.o get_language_from_filename.o -o code_analysis_t
    g++ -std=c++11 -c get_language_from_filename_t.cpp
    g++ get_language_from_filename_t.o get_language_from_filename.o -o get_language_from_filename_t

% make test

    ./code_analysis_t
    ./code_analysis_t: code_analysis_t.cpp:59: main Check `filename == "main.cpp"' failed.
    ./code_analysis_t: code_analysis_t.cpp:61: main Check `analysis_language(request, filename) == "C++"' failed.
    ./code_analysis_t: code_analysis_t.cpp:62: main Check `code_analysis(request) == true' failed.
    ./code_analysis_t: code_analysis_t.cpp:76: main Check `filename == "main.cpp"' failed.
    ./code_analysis_t: code_analysis_t.cpp:78: main Check `analysis_language(request, filename) == "C++"' failed.
    ./code_analysis_t: code_analysis_t.cpp:79: main Check `code_analysis(request) == true' failed.
    ./code_analysis_t: code_analysis_t.cpp:93: main Check `filename == "main.cpp"' failed.
    ./code_analysis_t: code_analysis_t.cpp:95: main Check `analysis_language(request, filename) == "C++"' failed.
    ./code_analysis_t: code_analysis_t.cpp:96: main Check `code_analysis(request) == true' failed.
    ./code_analysis_t: code_analysis_t.cpp:129: main Check `analysis_language(request, filename) == "C++"' failed.
    ./code_analysis_t: code_analysis_t.cpp:130: main Check `code_analysis(request) == true' failed.
    ./code_analysis_t: code_analysis_t.cpp:144: main Check `filename == "foo.cpp"' failed.
    ./code_analysis_t: code_analysis_t.cpp:146: main Check `analysis_language(request, filename) == "C++"' failed.
    ./code_analysis_t: code_analysis_t.cpp:147: main Check `code_analysis(request) == true' failed.
    ./code_analysis_t: code_analysis_t.cpp:161: main Check `filename == "foo.cpp"' failed.
    ./code_analysis_t: code_analysis_t.cpp:162: main Check `analysis_url(request) == "http://github.com/mlcollard/CodeAnalysisMetadata"' failed.
    ./code_analysis_t: code_analysis_t.cpp:163: main Check `analysis_language(request, filename) == "C++"' failed.
    ./code_analysis_t: code_analysis_t.cpp:164: main Check `code_analysis(request) == true' failed.
    ./code_analysis_t: code_analysis_t.cpp:178: main Check `filename == "foo.cpp"' failed.
    ./code_analysis_t: code_analysis_t.cpp:179: main Check `analysis_url(request) == "http://github.com/mlcollard/CodeAnalysisMetadata"' failed.
    ./code_analysis_t: code_analysis_t.cpp:180: main Check `analysis_language(request, filename) == "C++"' failed.
    ./code_analysis_t: code_analysis_t.cpp:181: main Check `code_analysis(request) == true' failed.

## Test Oracle: code\_analysis.cpp
% cp ~collard/CodeAnalysisMetadataEvaluation/code_analysis.cpp  .  
% make

    g++ -std=c++11 -c code_analysis_t.cpp
    code_analysis_t.cpp:43:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:53:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:66:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:80:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:90:7: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    5 errors generated.
    make: *** [code_analysis_t.o] Error 1

% make test

    g++ -std=c++11 -c code_analysis_t.cpp
    code_analysis_t.cpp:43:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:53:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:66:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:80:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:90:7: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    5 errors generated.
    make: *** [code_analysis_t.o] Error 1

## Code
% srcml code_analysis.cpp code_analysis_t.cpp -o project.xml
% srcml --xpath="//src:function[src:name='code_analysis']" project.xml | srcml

     1 bool code_analysis(const analysis_request& request) {
     2 
     3     auto filename = analysis_filename(request);
     4 
     5     auto url = analysis_url(request);
     6 
     7     auto language = analysis_language(request, filename);
     8 
     9     // code analysis processing that is not yet implemented
    10 
    11     return false;
    12 }

% srcml --xpath="//src:function[src:name='analysis_filename']" project.xml | srcml

     1 std::string analysis_filename(const analysis_request& request) {
     2 
     3     return "";
     4 }

% srcml --xpath="//src:function[src:name='analysis_url']" project.xml | srcml

     1 std::string analysis_url(const analysis_request& request) {
     2 
     3     return "";
     4 }

% srcml --xpath="//src:function[src:name='analysis_language']" project.xml | srcml

     1 std::string analysis_language(const analysis_request& request, const std::string& filename) {
     2 
     3     return "";
     4 }

## Test Cases 
% srcml code_analysis_t.cpp --xpath="//src:function[src:name='main']/src:block" | srcml

    {
    
        // Objects with underscore 1 are the desired outcome of the tests
        // This test is to assert that option cases take precedence in all analysis tests
        {
            analysis_request request;
            request.given_filename  = "Filename_2";
            request.entry_filename  = "Filename_3";
            request.given_url       = "URL_2";
            request.option_filename = "Filename_1";
            request.option_url      = "URL_1";
            request.option_language = "Language_1";
    
            auto filename = analysis_filename(request);
            assert(filename == "Filename_1");
            assert(analysis_url(request) == "URL_1");
            assert(analysis_language(request, filename) == "Language_1");
            assert(code_analysis(request) == false);
            
            
        // Objects with underscore 1 are the desired outcome of the tests
        // Fixed an error with rule 2
        // Testing that the analysis follows rule 2 for entry filename and that the language table function works
            
            request.given_filename  = "Filename_2.cpp";
            request.entry_filename  = "Filename_1.cpp";
            request.given_url       = "URL_1";
            request.option_filename = "";
            request.option_url      = "";
            request.option_language = "";
    
            auto filename = analysis_filename(request);
            assert(filename == "Filename_1.cpp");
            assert(analysis_url(request) == "URL_1");
            assert(analysis_language(request, filename) == "C++");
            assert(code_analysis(request) == false);
            
        //This will test rule 3 by assigning entry_filename as "data"
            request.given_filename  = "Filename_1.cpp";
            request.entry_filename  = "data";
    
            auto filename = analysis_filename(request);
            assert(filename == "Filename_1.cpp");
            assert(analysis_language(request, filename) == "C++");
            assert(code_analysis(request) == false);
            
        //This will test a condition in rule 7, as well as an error code in code_analysis
        request.given_filename  = "-";
            request.entry_filename  = "data";
            request.given_url       = "";
            request.option_filename = "";
            request.option_url      = "";
            request.option_language = "";
    
            auto filename = analysis_filename(request);
            assert(filename == "");
            assert(analysis_url(request) == "");
            assert(analysis_language(request, filename) == "");
            assert(code_analysis(request) == false);
            
        //This will test another rule in rule 7
        request.given_filename  = "-";
            request.entry_filename  = "File";
            request.given_url       = "";
            request.option_filename = "";
            request.option_url      = "";
            request.option_language = "";
    
            auto filename = analysis_filename(request);
            assert(filename == "File");
            assert(analysis_url(request) == "");
            assert(analysis_language(request, filename) == "");
            assert(code_analysis(request) == false);
        
        //This will trigger the second error code 
        request.given_filename  = "File";
            request.entry_filename  = "data";
            
        auto filename = analysis_filename(request);
            assert(filename == "File");
            assert(analysis_url(request) == "");
            assert(analysis_language(request, filename) == "");
            assert(code_analysis(request) == false);
        }
    
        return 0;
    }

## Literal Values used in Testing
% srcml code\_analysis_t.cpp --xpath="//src:literal" | srcml | tr '\0' '\n' |grep '"' | sort -u | tr '\n' ','

    "-" "C++" "File" "Filename_1" "Filename_1.cpp" "Filename_2" 
    "Filename_2.cpp" "Filename_3" "Language_1" "URL_1" "URL_2" "data" 

## Error Messages
% srcml code_analysis.cpp --xpath="//src:function[src:name='code_analysis']//src:expr[contains(., 'cerr')]//src:literal" | srcml | tr '\0'  '\n'



## Commits

### Commit 8ec18b
% git checkout -q 8ec18b  
% make  

    g++ -std=c++11 -c code_analysis_t.cpp
    g++ -std=c++11 -c code_analysis.cpp
    g++ -std=c++11 -c get_language_from_filename.cpp
    g++ code_analysis_t.o code_analysis.o get_language_from_filename.o -o code_analysis_t
    g++ -std=c++11 -c get_language_from_filename_t.cpp
    g++ get_language_from_filename_t.o get_language_from_filename.o -o get_language_from_filename_t

% git show

    commit 8ec18bac37a9e54687705221e3654706975ec1d9
    Author: BartramAlex <arb145@zips.uakron.edu>
    Date:   Sat Apr 7 06:40:54 2018 -0400
    
        Update code_analysis_t.cpp
        
        Option tag conditions work.
    
    diff --git a/code_analysis_t.cpp b/code_analysis_t.cpp
    index 820446d..3b269f7 100644
    --- a/code_analysis_t.cpp
    +++ b/code_analysis_t.cpp
    @@ -11,20 +11,21 @@
     
     int main() {
     
    -    // all parts of the request are empty
    +    // Objects with underscore 1 are the desired outcome of the tests
    +	// This test is to assert that option cases take precedence in all analysis tests
         {
             analysis_request request;
    -        request.given_filename  = "";
    -        request.entry_filename  = "";
    -        request.given_url       = "";
    -        request.option_filename = "";
    -        request.option_url      = "";
    -        request.option_language = "";
    +        request.given_filename  = "Filename_2";
    +        request.entry_filename  = "Filename_3";
    +        request.given_url       = "URL_2";
    +        request.option_filename = "Filename_1";
    +        request.option_url      = "URL_1";
    +        request.option_language = "Language_1";
     
             auto filename = analysis_filename(request);
    -        assert(filename == "");
    -        assert(analysis_url(request) == "");
    -        assert(analysis_language(request, filename) == "");
    +        assert(filename == "Filename_1");
    +        assert(analysis_url(request) == "URL_1");
    +        assert(analysis_language(request, filename) == "Language_1");
             assert(code_analysis(request) == false);
         }
     


### Commit cda254
% git checkout -q cda254  
% make  

    g++ -std=c++11 -c code_analysis_t.cpp
    code_analysis_t.cpp:43:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    1 error generated.
    make: *** [code_analysis_t.o] Error 1

% git show

    commit cda2545b4af63e5e2c90b497b7e638b91f8942a7
    Author: BartramAlex <arb145@zips.uakron.edu>
    Date:   Sat Apr 7 06:50:09 2018 -0400
    
        Update code_analysis_t.cpp
        
        Added new conditions for rule 2 as well as testing the language lookup function.
        So far rules 1, 2, 4, 5 and 6 are shown to work correctly.
        The next test will display rule 3, and the 2 after that are both for rule 7.
        Finally we will test the error messages.
    
    diff --git a/code_analysis_t.cpp b/code_analysis_t.cpp
    index 3b269f7..cf97e3b 100644
    --- a/code_analysis_t.cpp
    +++ b/code_analysis_t.cpp
    @@ -27,6 +27,27 @@ int main() {
             assert(analysis_url(request) == "URL_1");
             assert(analysis_language(request, filename) == "Language_1");
             assert(code_analysis(request) == false);
    +	    
    +	    
    +	// Objects with underscore 1 are the desired outcome of the tests
    +	// Fixed an error with rule 2
    +	// Testing that the analysis follows rule 2 for entry filename and that the language table function works
    +        
    +        request.given_filename  = "Filename_2.cpp";
    +        request.entry_filename  = "Filename_1.cpp";
    +        request.given_url       = "URL_1";
    +        request.option_filename = "";
    +        request.option_url      = "";
    +        request.option_language = "";
    +
    +        auto filename = analysis_filename(request);
    +        assert(filename == "Filename_1.cpp");
    +        assert(analysis_url(request) == "URL_1");
    +        assert(analysis_language(request, filename) == "C++");
    +        assert(code_analysis(request) == false);
    +	    
    +	    
    +	
         }
     
         return 0;


### Commit 7c11e1
% git checkout -q 7c11e1  
% make  

    g++ -std=c++11 -c code_analysis_t.cpp
    code_analysis_t.cpp:43:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:53:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    2 errors generated.
    make: *** [code_analysis_t.o] Error 1

% git show

    commit 7c11e14cef4b3bd7a2c44b4c7e88e2c8af5c2370
    Author: BartramAlex <arb145@zips.uakron.edu>
    Date:   Sat Apr 7 06:52:56 2018 -0400
    
        Update code_analysis_t.cpp
        
        This asserts that rule 3 works for analysis_filename
    
    diff --git a/code_analysis_t.cpp b/code_analysis_t.cpp
    index cf97e3b..3bdac48 100644
    --- a/code_analysis_t.cpp
    +++ b/code_analysis_t.cpp
    @@ -46,8 +46,17 @@ int main() {
             assert(analysis_language(request, filename) == "C++");
             assert(code_analysis(request) == false);
     	    
    +	//This will test rule 3 by assigning entry_filename as "data"
    +        request.given_filename  = "Filename_1.cpp";
    +        request.entry_filename  = "data";
    +
    +        auto filename = analysis_filename(request);
    +        assert(filename == "Filename_1.cpp");
    +        assert(analysis_language(request, filename) == "C++");
    +        assert(code_analysis(request) == false);
     	    
     	
    +	
         }
     
         return 0;


### Commit cea73d
% git checkout -q cea73d  
% make  

    g++ -std=c++11 -c code_analysis_t.cpp
    code_analysis_t.cpp:43:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:53:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:66:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:80:14: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:90:7: error: redefinition of 'filename'
            auto filename = analysis_filename(request);
                 ^
    code_analysis_t.cpp:25:14: note: previous definition is here
            auto filename = analysis_filename(request);
                 ^
    5 errors generated.
    make: *** [code_analysis_t.o] Error 1

% git show

    commit cea73d179ec3f82611a8238b1f594301b4e6753d
    Author: BartramAlex <arb145@zips.uakron.edu>
    Date:   Sat Apr 7 07:04:03 2018 -0400
    
        Update code_analysis_t.cpp
        
        Both cases in rule 7 tested, both error messages triggered.
        Testing complete
    
    diff --git a/code_analysis_t.cpp b/code_analysis_t.cpp
    index 3bdac48..c2b0406 100644
    --- a/code_analysis_t.cpp
    +++ b/code_analysis_t.cpp
    @@ -55,8 +55,43 @@ int main() {
             assert(analysis_language(request, filename) == "C++");
             assert(code_analysis(request) == false);
     	    
    +	//This will test a condition in rule 7, as well as an error code in code_analysis
    +	request.given_filename  = "-";
    +        request.entry_filename  = "data";
    +        request.given_url       = "";
    +        request.option_filename = "";
    +        request.option_url      = "";
    +        request.option_language = "";
    +
    +        auto filename = analysis_filename(request);
    +        assert(filename == "");
    +        assert(analysis_url(request) == "");
    +        assert(analysis_language(request, filename) == "");
    +        assert(code_analysis(request) == false);
    +	    
    +	//This will test another rule in rule 7
    +	request.given_filename  = "-";
    +        request.entry_filename  = "File";
    +        request.given_url       = "";
    +        request.option_filename = "";
    +        request.option_url      = "";
    +        request.option_language = "";
    +
    +        auto filename = analysis_filename(request);
    +        assert(filename == "File");
    +        assert(analysis_url(request) == "");
    +        assert(analysis_language(request, filename) == "");
    +        assert(code_analysis(request) == false);
     	
    -	
    +	//This will trigger the second error code 
    +	request.given_filename  = "File";
    +        request.entry_filename  = "data";
    +	    
    +	auto filename = analysis_filename(request);
    +        assert(filename == "File");
    +        assert(analysis_url(request) == "");
    +        assert(analysis_language(request, filename) == "");
    +        assert(code_analysis(request) == false);
         }
     
         return 0;

