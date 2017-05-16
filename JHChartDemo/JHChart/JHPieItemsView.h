//
//  JHPieItemsView.h
//  JHCALayer
//


#import <UIKit/UIKit.h>

@interface JHPieItemsView : UIView

/**
 *  Each initialization method of pie chart
 *  @param frame:frame
 *  @param beginAngle:Starting angle of cake block
 *  @param endAngle：End angle of cake block
 *  @param fillColor：Fill color for this cake block
 */
- (JHPieItemsView *)initWithFrame:(CGRect)frame
                    andBeginAngle:(CGFloat)beginAngle
                      andEndAngle:(CGFloat)endAngle
                     andFillColor:(UIColor *)fillColor;
@end
