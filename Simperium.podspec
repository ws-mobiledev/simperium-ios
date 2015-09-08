Pod::Spec.new do |s|
  s.name         = "Simperium"
  s.version      = File.read("Simperium/SPEnvironment.m").split("NSString* const SPLibraryVersion = @\"").last.split("\"").first
  s.summary      = "Simperium libraries."
  s.description  = "Simperium is a simple way for developers to move data as it changes, instantly and automatically."
  s.homepage     = "https://github.com/Simperium/simperium-ios"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { "Simperium" => "contact@simperium.com" }

  # Sources
  #
  s.source     = { :git => "https://github.com/Simperium/simperium-ios.git", :tag => "v" << s.version.to_s }
  s.ios.deployment_target = '6.0'
  s.source_files = 'Simperium/*.{h,m}', 'External/**/*.{h,m}'

  # Frameworks
  #
  s.frameworks = 'Security', 'MobileCoreServices', 'CoreData', 'CFNetwork', 'SystemConfiguration', 'Foundation', 'UIKit', 'CoreGraphics'

  # Required by SocketRocket
  s.libraries = "icucore"
  s.requires_arc = true
end
