Pod::Spec.new do |s|

s.name               = "VersionBox"

s.version            = "1.0.15"

s.summary         = "VersionBox"

s.license              = "MIT"

s.homepage = "http://www.dijitalgaraj.com/"

s.author               = "Dijital Garaj"

s.platform            = :ios

s.source              = { :git => "https://github.com/dijitalgaraj/VersionBox-iOS.git", :tag => "1.0.15" }

s.frameworks = "VersionBox"

s.xcconfig = { "FRAMEWORK_SEARCH_PATHS" => "$(SRCROOT)/"}

s.vendored_frameworks = "VersionBox.framework"


s.public_header_files = "VersionBox.framework/header/*.h", "DGAnalyticp/*.h"
end
