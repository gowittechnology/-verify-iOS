//  Created by GoWit
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^VerifyCompletedCallback)(NSURL *fileOuputURL);

@interface Verify : NSObject

- (void)startRecordingView:(UIView *)view  excludeView:(UIView *)eView onCompletion:(VerifyCompletedCallback)block;

- (id)initWithAppID:(NSString *)applicationID;

/**
 Receiving AppID in lifecycle.
 **/
+(NSString *)getAppID;
/**
 Stops recording a previously defined UIView.
 **/
- (void)stop;
@end
