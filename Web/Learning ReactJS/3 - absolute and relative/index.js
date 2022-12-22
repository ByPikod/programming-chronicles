function Box( props ){
    return (
        <div style={ { width: props.width + "px" , height: props.height + "px" } } className={ props.className ? "box " + props.className : "box" }>
            Kutu
            {props.children}
        </div>
    )
}

var root = ReactDOM.createRoot(document.getElementById("root"))
root.render(
    <div>
        <Box width="100" height="150"></Box>
        <Box width="200" height="150" className="relativeBox">
            <Box width="100" height="70" className="absoluteBox"></Box>
        </Box>
    </div>
);