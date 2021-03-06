/* (c) Copyright 2014 Felipe Magno de Almeida
 *
 * Distributed under the Boost Software License, Version 1.0. (See
 * accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef HTTP_PARSERS_MIME_ABSOLUTE_URI_HPP
#define HTTP_PARSERS_MIME_ABSOLUTE_URI_HPP

#include <http-parsers/nonterminal.hpp>

namespace http_parsers { namespace mime {

template <typename Domain, typename Iterator, typename Attribute>
struct absolute_uri : http_parsers::grammar<Domain, Iterator, Attribute()>::type
{
  absolute_uri();

  typename http_parsers::rule<Domain, Iterator, Attribute()>::type start;
  typename http_parsers::rule<Domain, Iterator, Attribute()>::type scheme, userinfo, host
    , port, query, fragment, domain_part;
  typename http_parsers::rule<Domain, Iterator, Attribute()>::type path;
};

} }

#endif
