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
    }

    return 0;
}
