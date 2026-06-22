/**
 * Browser Context
 * Main browser context and page management
 */

#ifndef KAHRMIUM_PAGE_H
#define KAHRMIUM_PAGE_H

#include <string>
#include <memory>
#include "renderer/html_parser.h"
#include "renderer/css_parser.h"
#include "renderer/layout_engine.h"
#include "networking/http_client.h"

namespace kahrmium {
namespace core {

/**
 * Page
 * Represents a single page/document
 */
class Page {
public:
    Page(const std::string& url);
    ~Page();

    std::string GetUrl() const { return url_; }
    std::string GetTitle() const { return title_; }
    std::shared_ptr<renderer::DOMNode> GetDOM() const { return domTree_; }

    void SetTitle(const std::string& title) { title_ = title; }

    /**
     * Load page from URL
     */
    bool LoadURL();

    /**
     * Set HTML content
     */
    bool SetHTML(const std::string& html);

    /**
     * Parse CSS
     */
    void ParseCSS(const std::string& css);

    /**
     * Get parsed styles
     */
    renderer::CSSStylesheet GetStyles() const { return styles_; }

private:
    std::string url_;
    std::string title_;
    std::string html_;
    std::shared_ptr<renderer::DOMNode> domTree_;
    renderer::CSSStylesheet styles_;
    HTTPClient httpClient_;
};

}  // namespace core
}  // namespace kahrmium

#endif  // KAHRMIUM_PAGE_H
