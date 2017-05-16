//
//  JHShowInfoView.h
//  JHChartDemo
//


#import <UIKit/UIKit.h>

@interface JHShowInfoView : UIView



@property (copy, nonatomic) NSString * showContentString;


- (void)updateFrameTo:(CGRect)frame andBGColor:(UIColor *)bgColor andShowContentString:(NSString *)contentString;

@end
