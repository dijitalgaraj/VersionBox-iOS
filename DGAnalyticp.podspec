Pod::Spec.new do |s|

s.name               = "DGAnalyticp"

s.version            = "1.0.0"

s.summary         = ""

s.license              = "MIT"

s.homepage = "http://www.dijitalgaraj.com/"

s.author               = "Dijital Garaj"

s.platform            = :ios

s.source              = { :git => "https://bitbucket.org/patriotTeam/dganalytic-pod.git", :tag => "1.0.0" }

s.frameworks = "DGAnalytic"

s.xcconfig = { "FRAMEWORK_SEARCH_PATHS" => "$(SRCROOT)/Framework"}

s.vendored_frameworks = "DGAnalytic.framework"

s.source_files     = "DGAnalyticp/**/*.{h,m}"

s.public_header_files = "DGAnalytic.framework/header/*.h", "DGAnalyticp/*.h"
end
