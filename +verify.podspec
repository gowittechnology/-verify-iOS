
Pod::Spec.new do |s|

  s.name         = "+verify"
  s.version      = "0.1.1"
  s.summary      = "+verify IOS SDK"

  s.description  = "For more information, please visit https://plusverify.com/documentation"

  s.homepage     = "https://github.com/gowittechnology/verify-iOS"
  s.license      = "MIT"
  s.author             = { "onderozcan" => "onder@gowit.com" }
  s.social_media_url   = "http://twitter.com/onder"
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/gowittechnology/verify-iOS.git", :tag => "#{s.version}" }
  s.exclude_files = "Classes/Exclude"
  s.ios.vendored_frameworks = "+verify.framework"

end
