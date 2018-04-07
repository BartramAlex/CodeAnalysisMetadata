/*
  @file code_analysis_t.cpp

  Test program for analysis requests
*/

#include "code_analysis.hpp"

#include <string>
#include <cassert>

int main() {

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
