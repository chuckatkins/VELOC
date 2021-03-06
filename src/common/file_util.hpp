#ifndef __FILE_UTIL
#define __FILE_UTIL

#include <string>
#include "status.hpp"

ssize_t file_size(const std::string &source);
bool write_file(const std::string &source, unsigned char *buffer, ssize_t size);
bool read_file(const std::string &source, unsigned char *buffer, ssize_t size);
bool posix_transfer_file(const std::string &source, const std::string &dest);
int get_latest_version(const std::string &p, const std::string &cname, int needed_version);

void rm_tree(const std::string &d);
bool check_dir(const std::string &d);

#endif //__FILE_UTIL
