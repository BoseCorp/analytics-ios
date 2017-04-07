#if TARGET_OS_IPHONE

#import <UIKit/UIKit.h>


@interface UIViewController (SEGScreen)

+ (void)seg_swizzleViewDidAppear;

@end

#endif
