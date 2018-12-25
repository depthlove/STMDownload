#
#  Be sure to run `pod spec lint PLShortVideoKit.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

    s.name         = "STMDownload"
    s.version      = "1.0.0"
    s.summary      = "File download toolbox"
    s.homepage     = "https://github.com/depthlove/STMDownload"
    s.license      = "Apache License 2.0"
    s.author       = { "depthlove" => "suntongmian@163.com" }

    s.source       = { :git => "https://github.com/depthlove/STMDownload.git", :tag => "v#{s.version}" }

    s.source_files = 'STMDownload/**/*.{h,m}'

    s.platform     = :ios
    s.ios.deployment_target    = "8.0"
    s.requires_arc = true

    s.framework    = 'UIKit'

    s.dependency   'ASIHTTPRequest'

end
