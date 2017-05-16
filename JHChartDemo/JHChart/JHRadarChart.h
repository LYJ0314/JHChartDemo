//
//  JHRadarChart.h
//  JHChartDemo
//




#import "JHChart.h"

@interface JHRadarChart : JHChart


/**
 *  Data Source Arrays
 */
@property (nonatomic, strong) NSArray<NSArray*> * valueDataArray;


/**
 *  Each corner of the description text
 */
@property (nonatomic, strong) NSArray<NSString *> * valueDescArray;


/**
 *  The number of layers, the default is 3. (number of scales)
 */
@property (nonatomic, assign) NSInteger layerCount;

/**
 *  Layer of fill color, the best choice of translucent color, otherwise will block the line
 */
@property (nonatomic, strong) UIColor * layerFillColor;


/**
 *  Layer boundary line color
 */
@property (nonatomic, strong) UIColor * layerBoardColor;

/**
 *  Block line color
 */
@property (nonatomic, strong) UIColor * speraLineColor;

/**
 *  Maximum value
 */
@property (nonatomic, assign) CGFloat perfectNumber;

/**
 *  Describe the font and color of the text
 */
@property (nonatomic, strong) UIFont * descTextFont;
@property (nonatomic, strong) UIColor * descTextColor;


/**
 *  Fill color array of value module
 */
@property (nonatomic, strong) NSArray<UIColor *> * valueDrawFillColorArray;

/**
 *  Boundary color of value module
 */
@property (nonatomic, strong) NSArray<UIColor *> * valueBoardColorArray;


@end
