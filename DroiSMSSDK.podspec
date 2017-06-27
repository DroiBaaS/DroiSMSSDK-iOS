Pod::Spec.new do |s|
s.name             = "DroiSMSSDK"
s.version          = "1.0.3"
s.summary          = "卓易短信 SDK"
s.description      = "帮助开发者快速集成短信验证功能"
s.homepage         = "https://github.com/DroiBaaS"
# s.screenshots      = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
s.license          = 'MIT'
s.author           = { "DoriBaaS" => "droiinfo@droi.com" }
s.source           = { :git => "https://github.com/DroiBaaS/DroiSMSSDK-iOS.git", :tag => s.version.to_s }
# s.social_media_url = 'https://twitter.com/NAME'

s.platform     = :ios, '8.0'

s.requires_arc = true

s.vendored_frameworks = "**/DroiSMS.framework"
s.resources = "**/*.{bundle}"
s.frameworks = 'Foundation'
s.dependency 'DroiCoreSDK'
s.dependency 'MBProgressHUD'
end
