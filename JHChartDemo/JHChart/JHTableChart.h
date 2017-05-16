//
//  JHTableChart.h
//  JHChartDemo
//


#import "JHChart.h"

@interface JHTableChart : JHChart
/**
 *  Table name, if it is empty, does not display a table name
 *  标题
 */
@property (nonatomic, copy) NSString * tableTitleString;

/**
 *  Table header row height, default 50
 */
@property (nonatomic, assign) CGFloat tableChartTitleItemsHeight;


/**
 *  Table header text font size (default 15), color (default depth)
 */
@property (nonatomic, strong) UIFont * tableTitleFont;
@property (nonatomic, strong) UIColor * tableTitleColor;



/**
 *  Table line color
 *  表格线颜色
 */
@property (nonatomic, strong) UIColor  * lineColor;


/**
 *  Data Source Arrays
 *  表格数据源
 */
@property (nonatomic, strong) NSArray * dataArr;


/**
 *  Width of each column
 *  每一列的宽度（没效果。。。）
 */
@property (nonatomic, strong) NSArray * colWidthArr;

/**
 *  The smallest line is high, the default is 50
 *  表格最小高度 默认50
 */
@property (nonatomic, assign) CGFloat minHeightItems;


/**
 *  Table data display color
 *  表格内容颜色
 */
@property (nonatomic, strong) UIColor * bodyTextColor;


/**
 *  The column header name, the first column horizontal statement, need to use | segmentation
 *  表格 每列的标签
 */
@property (nonatomic, strong) NSArray * colTitleArr;

/**
 *  Anyway, the ranks of name statement, if it is necessary to fill out a two data
 */
@property (nonatomic, strong) NSArray * rowAndColTitleArr;


/**
 *  Offset value of start point
 *  起点偏移量
 */
@property (nonatomic, assign) CGFloat beginSpace;



/**
 *  According to the current data source to determine the desired table view
 */
- (CGFloat)heightFromThisDataSource;

@end
